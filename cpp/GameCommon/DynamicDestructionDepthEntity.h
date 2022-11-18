// Object: DynamicDestructionDepthEntity
// ClassId: 7837
// RuntimeId: 25752
// TypeInfo: 0x0000000144E4A940
#include "../GameCommon/AbstractDynamicDestructionDepthEntity.h"

namespace GameCommon {
    class DynamicDestructionDepthEntity : public GameCommon::AbstractDynamicDestructionDepthEntity {
        char pad_0x48[0x48];
    }; // 0x90
    static_assert(sizeof(DynamicDestructionDepthEntity) == 0x90);
}