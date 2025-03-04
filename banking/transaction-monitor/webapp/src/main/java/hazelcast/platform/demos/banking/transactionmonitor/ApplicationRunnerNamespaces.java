/*
 * Copyright (c) 2008-2025, Hazelcast, Inc. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package hazelcast.platform.demos.banking.transactionmonitor;

import java.net.InetSocketAddress;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;
import java.util.Map;
import java.util.Properties;
import java.util.TreeMap;
import java.util.concurrent.Future;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.hazelcast.cluster.Member;
import com.hazelcast.config.ItemListenerConfig;
import com.hazelcast.config.MapConfig;
import com.hazelcast.config.MapStoreConfig;
import com.hazelcast.config.QueueConfig;
import com.hazelcast.config.UserCodeNamespaceConfig;
import com.hazelcast.core.HazelcastInstance;
import com.hazelcast.core.IExecutorService;

import edu.umd.cs.findbugs.annotations.SuppressFBWarnings;

/**
 * <p>Demonstrates multiple namespaces, sending the Jar files from the client to the servers.
 * </p>
 * <p>An indentically named callable is run in every namespace, but the implementation differs.
 * </p>
 * <p>Some namespaces have actions unique to them.
 * </p>
 */
public class ApplicationRunnerNamespaces {

    private static final Logger LOGGER = LoggerFactory.getLogger(ApplicationRunnerNamespaces.class);

    /**
     * <p>Run the three namespace based operations, a failure on one doesn't stop another being
     * attempted.
     * </p>
     */
    static void runNamespaceActions(HazelcastInstance hazelcastInstance, boolean isHzCloud) {
        try {
            doNamespace1Action(hazelcastInstance, isHzCloud);
        } catch (Exception e) {
            LOGGER.error("doNamespace1Action", e);
        }
        try {
            doNamespace2Action(hazelcastInstance, isHzCloud);
        } catch (Exception e) {
            LOGGER.error("doNamespace2Action", e);
        }
        try {
            doNamespace3Action(hazelcastInstance, isHzCloud);
        } catch (Exception e) {
            LOGGER.error("doNamespace3Action", e);
        }
    }

    /**
     * <p>Run the namespace 1 variant of the executor, mixed case output.
     * </p>
     *
     * @param hazelcastInstance
     * @param isHzCloud
     * @throws Exception If configuration goes wrong. Exception by called class is caught.
     */
    @SuppressFBWarnings(value = "DMI_HARDCODED_ABSOLUTE_FILENAME", justification = "File location in Docker image is fixed.")
    private static void doNamespace1Action(HazelcastInstance hazelcastInstance, boolean isHzCloud) throws Exception {
        addNamespaceJar(hazelcastInstance, MyConstants.USER_CODE_NAMESPACE_1, MyConstants.USER_CODE_JAR_FOR_NAMESPACE_1);

        IExecutorService iExecutorServiceNS1 = hazelcastInstance.getExecutorService(MyConstants.EXECUTOR_NAMESPACE_1);
        ServerInfoCallable serverInfoCallable = new ServerInfoCallable(isHzCloud, iExecutorServiceNS1.getName());
        try {
            Map<Member, Future<List<String>>> futuresMap = iExecutorServiceNS1.submitToAllMembers(serverInfoCallable);
            printFuturesMap("doNamespace1Action", futuresMap);
        } catch (Exception e) {
            LOGGER.error("doNamespace1Action(), futuresMap", e);
        }
    }

    /**
     * <p>Run the namespace 2 variant of the executor, upper case output.
     * </p>
     * <p>Add a map store, and launch a second runnable that writes to the map with the map store.
     * </p>
     *
     * @param hazelcastInstance
     * @param isHzCloud
     * @throws Exception If configuration goes wrong. Exception by called class is caught.
     */
    private static void doNamespace2Action(HazelcastInstance hazelcastInstance, boolean isHzCloud) throws Exception {
        addNamespaceJar(hazelcastInstance, MyConstants.USER_CODE_NAMESPACE_2, MyConstants.USER_CODE_JAR_FOR_NAMESPACE_2);

        IExecutorService iExecutorServiceNS2 = hazelcastInstance.getExecutorService(MyConstants.EXECUTOR_NAMESPACE_2);
        ServerInfoCallable serverInfoCallable = new ServerInfoCallable(isHzCloud, iExecutorServiceNS2.getName());
        try {
            Map<Member, Future<List<String>>> futuresMap = iExecutorServiceNS2.submitToAllMembers(serverInfoCallable);
            printFuturesMap("doNamespace2Action", futuresMap);
        } catch (Exception e) {
            LOGGER.error("doNamespace2Action(), futuresMap", e);
        }

        // Map with logging map store
        Properties todayLoggingMapStoreProperties = new Properties();
        todayLoggingMapStoreProperties.put("prefix", MyConstants.MAP_NAMESPACE_2);
        MapStoreConfig mapStoreConfigNS2 = new MapStoreConfig();
        mapStoreConfigNS2.setEnabled(true)
        .setFactoryClassName(TodayLoggingMapStoreFactory.class.getCanonicalName())
        .setProperties(todayLoggingMapStoreProperties);

        // Note wildcard
        MapConfig mapConfigNS2 = new MapConfig(MyConstants.MAP_NAMESPACE_2 + "*");
        mapConfigNS2.setUserCodeNamespace(MyConstants.USER_CODE_NAMESPACE_2);
        mapConfigNS2.setMapStoreConfig(mapStoreConfigNS2);
        hazelcastInstance.getConfig().addMapConfig(mapConfigNS2);

        // Runnable that writes to map with logging map store
        TodayLoggingRunnable todayLoggingRunnable =
                new TodayLoggingRunnable(isHzCloud, iExecutorServiceNS2.getName(), MyConstants.MAP_NAMESPACE_2);
        iExecutorServiceNS2.execute(todayLoggingRunnable);
    }

    /**
     * <p>Run the namespace 3 variant of the executor, lower case output.
     * </p>
     * <p>Add a queue listener into the namespace, then launch runnables to read and write from
     * this queue.
     * </p>
     *
     * @param hazelcastInstance
     * @param isHzCloud
     * @throws Exception If configuration goes wrong. Exception by called class is caught.
     */
    private static void doNamespace3Action(HazelcastInstance hazelcastInstance, boolean isHzCloud) throws Exception {
        addNamespaceJar(hazelcastInstance, MyConstants.USER_CODE_NAMESPACE_3, MyConstants.USER_CODE_JAR_FOR_NAMESPACE_3);

        IExecutorService iExecutorServiceNS3 = hazelcastInstance.getExecutorService(MyConstants.EXECUTOR_NAMESPACE_3);
        ServerInfoCallable serverInfoCallable = new ServerInfoCallable(isHzCloud, iExecutorServiceNS3.getName());
        try {
            Map<Member, Future<List<String>>> futuresMap = iExecutorServiceNS3.submitToAllMembers(serverInfoCallable);
            printFuturesMap("doNamespace3Action", futuresMap);
        } catch (Exception e) {
            LOGGER.error("doNamespace3Action(), future.get()", e);
        }

        // Queue with logging queue listener
        ItemListenerConfig itemListenerConfigNS3 = new ItemListenerConfig();
        itemListenerConfigNS3.setIncludeValue(true);
        itemListenerConfigNS3.setImplementation(new LoggingItemListener(MyConstants.QUEUE_NAMESPACE_3));
        QueueConfig queueConfigNS3 = new QueueConfig(MyConstants.QUEUE_NAMESPACE_3);
        queueConfigNS3.setUserCodeNamespace(MyConstants.USER_CODE_NAMESPACE_3);
        //FIXME Scaling post initiatialize queueConfigNS3.addItemListenerConfig(itemListenerConfigNS3);
        hazelcastInstance.getConfig().addQueueConfig(queueConfigNS3);

        // Runnable that writes to queue with listener
        PeriodicQueueWriterRunnable periodicQueueWriterRunnable =
                new PeriodicQueueWriterRunnable(isHzCloud, iExecutorServiceNS3.getName());
        iExecutorServiceNS3.execute(periodicQueueWriterRunnable);

        // Runnable that reads from queue with listener
        PeriodicQueueReaderRunnable periodicQueueReaderRunnable =
                new PeriodicQueueReaderRunnable(isHzCloud, iExecutorServiceNS3.getName());
        iExecutorServiceNS3.execute(periodicQueueReaderRunnable);
    }

    /**
     * <ul>
     * <li><p>Namespace "{@code ns1}" uses "{@code namespace1.jar}".</p></li>
     * <li><p>Namespace "{@code ns2}" uses "{@code namespace2.jar}".</p></li>
     * <li><p>Namespace "{@code ns3}" uses "{@code namespace3.jar}".</p></li>
     * </ul>
     * <p>Jar file is in root of Docker container.
     * </p>
     *
     * @param hazelcastInstance
     * @param userCodeNamespace
     * @param userCodeJarForNamespace
     * @throws Exception If invalid configuration or file not found
     */
    @SuppressFBWarnings(value = "DMI_HARDCODED_ABSOLUTE_FILENAME", justification = "File location in Docker image is fixed.")
    private static void addNamespaceJar(HazelcastInstance hazelcastInstance, String userCodeNamespace,
            String userCodeJarForNamespace) throws Exception {

        Path path = Paths.get("/" + userCodeJarForNamespace);
        if (!Files.exists(path)) {
            throw new RuntimeException("Can't find " + path.toString());
        }

        UserCodeNamespaceConfig userCodeNamespaceConfig = new UserCodeNamespaceConfig();
        userCodeNamespaceConfig.setName(userCodeNamespace);
        userCodeNamespaceConfig.addJar(path.toUri().toURL(), userCodeJarForNamespace);

        hazelcastInstance.getConfig().getNamespacesConfig().addNamespaceConfig(userCodeNamespaceConfig);
        LOGGER.debug("Namespace '{}' with Jar '{}' added", userCodeNamespaceConfig.getName(), path.toString());
    }

    /**
     * <p>Pretty print results from executor running on all servers.
     * </p>
     *
     * @param prefix
     * @param futuresMap
     * @throws Exception
     */
    private static void printFuturesMap(String prefix, Map<Member, Future<List<String>>> futuresMap) throws Exception {
        TreeMap<String, List<String>> result = new TreeMap<>();

        for (Map.Entry<Member, Future<List<String>>> entry : futuresMap.entrySet()) {
            InetSocketAddress inetSocketAddress = entry.getKey().getAddress().getInetSocketAddress();
            String host = inetSocketAddress.getAddress().getHostAddress();
            int port = inetSocketAddress.getPort();
            List<String> value = entry.getValue().get();
            result.put(host + ":" + port, value);
        }

        result
        .entrySet()
        .stream().forEach(entry -> LOGGER.info("{} :: {} - {}", prefix, entry.getKey(), entry.getValue()));
    }

}
