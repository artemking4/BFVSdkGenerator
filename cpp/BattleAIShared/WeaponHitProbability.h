// Object: WeaponHitProbability
// ClassId: 5655
// RuntimeId: 58348
// TypeInfo: 0x0000000144C06AE0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class WeaponHitProbability : public Core::DataContainer {
        Array<Float32> DistanceToTarget; // 0x18
        Array<Float32> DistanceProbability; // 0x20
        Array<Float32> TargetVisibility; // 0x28
        Array<Float32> VisibleProbability; // 0x30
    }; // 0x38
    static_assert(sizeof(WeaponHitProbability) == 0x38);
}
#pragma pack(pop)