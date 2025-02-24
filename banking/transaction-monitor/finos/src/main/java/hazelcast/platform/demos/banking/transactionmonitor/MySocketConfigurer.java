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

import org.springframework.context.annotation.Configuration;
import org.springframework.messaging.simp.config.MessageBrokerRegistry;
import org.springframework.web.socket.config.annotation.EnableWebSocketMessageBroker;
import org.springframework.web.socket.config.annotation.StompEndpointRegistry;
import org.springframework.web.socket.config.annotation.WebSocketMessageBrokerConfigurer;

/**
 * <p>A message broker for communication to a web socket.
 * </p>
 */
@Configuration
@EnableWebSocketMessageBroker
public class MySocketConfigurer implements WebSocketMessageBrokerConfigurer {

    /**
     * <p>Provide an endpoint for the <a href="https://stomp.github.io/">Stomp protocol</a>
     * </p>
     */
    @Override
    public void registerStompEndpoints(StompEndpointRegistry stompEndpointRegistry) {
        stompEndpointRegistry
        .addEndpoint("/" + MyConstants.WEBSOCKET_ENDPOINT)
        .setAllowedOriginPatterns("*")
        .withSockJS();
    }

    /**
     * <p>A common prefix for multiple feeds.
     * </p>
     */
    @Override
    public void configureMessageBroker(MessageBrokerRegistry messageBrokerRegistry) {
        messageBrokerRegistry
        .enableSimpleBroker("/" + MyConstants.WEBSOCKET_FEED_PREFIX);
    }

}
