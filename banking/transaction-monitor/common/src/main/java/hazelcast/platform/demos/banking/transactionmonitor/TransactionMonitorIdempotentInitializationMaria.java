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

import java.util.List;
import java.util.Locale;
import java.util.Properties;

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.hazelcast.core.HazelcastInstance;

/**
 * <p>Maria specific initialization
 * </p>
 * <p>Invoked by the overlarge {@link TransactionMonitorIdempotentInitialization}
 * </p>
 */
public class TransactionMonitorIdempotentInitializationMaria {
    private static final Logger LOGGER = LoggerFactory.getLogger(TransactionMonitorIdempotentInitializationMaria.class);

    /**
     * <p>Define Maria connection via SQL
     * </p>
     */
    static boolean defineMaria(HazelcastInstance hazelcastInstance, Properties properties,
            TransactionMonitorFlavor transactionMonitorFlavor, boolean isKubernetes) {
        try {
            String database = "transaction-monitor-" + transactionMonitorFlavor.toString().toLowerCase(Locale.ROOT);
            String uri = MyUtils.buildMariaURI(properties, database, isKubernetes);

            String user = MyUtils.ensureGet(properties, MyConstants.MARIA_USER);
            String password = MyUtils.ensureGet(properties, MyConstants.MARIA_PASSWORD);

            String definition1 = "CREATE DATA CONNECTION IF NOT EXISTS "
                + MyConstants.MARIA_DATACONNECTION_CONFIG_NAME
                + " TYPE Jdbc SHARED"
                + " OPTIONS ( "
                + " 'jdbcUrl' = '" + uri + "'"
                + ",'user' = '" + user + "'"
                + ",'password' = '" + password + "'"
                + " )";

            String definition2 = "CREATE MAPPING IF NOT EXISTS " + MyConstants.MARIA_TABLE
                    + " DATA CONNECTION " + MyConstants.MARIA_DATACONNECTION_CONFIG_NAME;

            boolean ok = true;
            for (String definition : List.of(definition1, definition2)) {
                ok &= TransactionMonitorIdempotentInitialization.define(definition, hazelcastInstance);
            }
            return ok;
        } catch (Exception e) {
            LOGGER.error("defineMaria()", e);
            return false;
        }
    }

}
