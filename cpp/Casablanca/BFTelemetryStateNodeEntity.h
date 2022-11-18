// Object: BFTelemetryStateNodeEntity
// ClassId: 8072
// RuntimeId: 20485
// TypeInfo: 0x0000000144C8FA40
#include "../UIIncubator/StateNodeEntity.h"

namespace Casablanca {
    class BFTelemetryStateNodeEntity : public UIIncubator::StateNodeEntity {
        char pad_0x90[0x28];
    }; // 0xB8
    static_assert(sizeof(BFTelemetryStateNodeEntity) == 0xB8);
}