// Object: DiceGameplayFeatureList
// ClassId: 467
// RuntimeId: 46916
// TypeInfo: 0x0000000144EFA5B0
#include "../Core/Asset.h"
#include "../MotionMachineShared/DiceExpression.h"
#include "../MotionMachineShared/DiceGameplayFeature.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class DiceGameplayFeatureList : public Core::Asset {
        MotionMachineShared::DiceExpression ScheduleExpression; // 0x20
        Array<MotionMachineShared::DiceGameplayFeature> Features; // 0x28
    }; // 0x30
    static_assert(sizeof(DiceGameplayFeatureList) == 0x30);
}
#pragma pack(pop)