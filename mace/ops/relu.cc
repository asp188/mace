//
// Copyright (c) 2017 XiaoMi All rights reserved.
//

#include "mace/ops/relu.h"

namespace mace {

REGISTER_CPU_OPERATOR(OpKeyBuilder("Relu")
                          .TypeConstraint<float>("T")
                          .Build(),
                      ReluOp<DeviceType::CPU, float>);

#if MACE_ENABLE_NEON
REGISTER_NEON_OPERATOR(OpKeyBuilder("Relu")
                             .TypeConstraint<float>("T")
                             .Build(),
                       ReluOp<DeviceType::NEON, float>);
#endif  // MACE_ENABLE_NEON

REGISTER_OPENCL_OPERATOR(OpKeyBuilder("Relu")
                             .TypeConstraint<float>("T")
                             .Build(),
                         ReluOp<DeviceType::OPENCL, float>);

REGISTER_OPENCL_OPERATOR(OpKeyBuilder("Relu")
                             .TypeConstraint<half>("T")
                             .Build(),
                         ReluOp<DeviceType::OPENCL, half>);

}  //  namespace mace
