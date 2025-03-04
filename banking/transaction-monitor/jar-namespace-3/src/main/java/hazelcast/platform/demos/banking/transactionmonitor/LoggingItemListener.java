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

import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.hazelcast.collection.ItemEvent;
import com.hazelcast.collection.ItemListener;

/**
 * <p>Logs items added and removed from queue.
 * </p>
 */
public class LoggingItemListener implements ItemListener<String> {
    private static final Logger LOGGER = LoggerFactory.getLogger(LoggingItemListener.class);

    private final String prefix;

    LoggingItemListener(String arg0) {
        this.prefix = arg0;
    }

    @Override
    public void itemAdded(ItemEvent<String> item) {
        LOGGER.info("**{}**'{}'::itemAdded() -> Queue '{}', Message '{}'", LocalConstants.MY_JAR_NAME, this.prefix,
                item.getSource(),
                item.getItem()
                );
    }

    @Override
    public void itemRemoved(ItemEvent<String> item) {
        LOGGER.info("**{}**'{}'::itemRemoved() -> Queue '{}', Message '{}'", LocalConstants.MY_JAR_NAME, this.prefix,
                item.getSource(),
                item.getItem()
                );
    }

}
