// Object: AITrackTargetSettings
// ClassId: 138
// RuntimeId: 34002
// TypeInfo: 0x0000000144C10B00
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AITrackTargetSettings : public Core::Asset {
        Float32 LostLineOfSightStopTrackingTime; // 0x20
        Float32 StartTrackingDistanceToTarget; // 0x24
        Float32 StopTrackingDistanceToTarget; // 0x28
        Boolean RequireLineOfSight; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(AITrackTargetSettings) == 0x30);
}
#pragma pack(pop)