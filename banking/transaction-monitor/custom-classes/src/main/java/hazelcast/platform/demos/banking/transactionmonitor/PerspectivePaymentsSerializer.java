/*
 * Copyright (c) 2008-2023, Hazelcast, Inc. All Rights Reserved.
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

import com.hazelcast.nio.serialization.compact.CompactReader;
import com.hazelcast.nio.serialization.compact.CompactSerializer;
import com.hazelcast.nio.serialization.compact.CompactWriter;

/**
 * <p>A class for serializing/deserializing a {@link PerspectivePayments}.
 * </p>
 */
public class PerspectivePaymentsSerializer implements CompactSerializer<PerspectivePayments> {

    @Override
    public PerspectivePayments read(CompactReader in) {
        PerspectivePayments perspectivePayments = new PerspectivePayments();
        perspectivePayments.setBic(in.readString("bic"));
        perspectivePayments.setCount(in.readInt64("count"));
        perspectivePayments.setSum(in.readFloat64("sum"));
        perspectivePayments.setAverage(in.readFloat64("average"));
        perspectivePayments.setSeconds(in.readInt32("seconds"));
        perspectivePayments.setRandom(in.readInt32("random"));
        return perspectivePayments;
    }

    @Override
    public void write(CompactWriter out, PerspectivePayments perspectivePayments) {
        out.writeString("bic", perspectivePayments.getBic());
        out.writeInt64("count", perspectivePayments.getCount());
        out.writeFloat64("sum", perspectivePayments.getSum());
        out.writeFloat64("average", perspectivePayments.getAverage());
        out.writeInt32("seconds", perspectivePayments.getSeconds());
        out.writeInt32("random", perspectivePayments.getRandom());
    }

    @Override
    public Class<PerspectivePayments> getCompactClass() {
        return PerspectivePayments.class;
    }

    @Override
    public String getTypeName() {
        return PerspectivePayments.class.getName();
    }

}
