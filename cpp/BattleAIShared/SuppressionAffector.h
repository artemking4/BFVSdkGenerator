// Object: SuppressionAffector
// ClassId: 4951
// RuntimeId: 7339
// TypeInfo: 0x0000000144C12D00
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SuppressionAffector : public Core::DataContainer {
        Float32 PercentOfSuppressionIncreaseToApply; // 0x18
        Float32 SuppressionThreshold; // 0x1C
        Float32 DecreaseMin; // 0x20
        Float32 DecreaseMax; // 0x24
        Boolean DecreaseMoraleOnEachSuppressionIncrease; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SuppressionAffector) == 0x30);
}
#pragma pack(pop)