// Object: AIMoveSettings
// ClassId: 135
// RuntimeId: 62907
// TypeInfo: 0x0000000144C18430
#include "../Core/Asset.h"
#include "../BattleAIShared/MoveSpeed.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/WalkSettings.h"
#include "../BattleAIShared/SprintSettings.h"
#include "../BattleAIShared/StartStopSettings.h"
#include "../BattleAIShared/EvasiveSettings.h"
#include "../BattleAIShared/SpeedControlSettings.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIMoveSettings : public Core::Asset {
        BattleAIShared::MoveSpeed MoveSpeed; // 0x20
        Float32 FireTargetDistance; // 0x24
        BattleAIShared::WalkSettings Walk; // 0x28
        BattleAIShared::SprintSettings Sprint; // 0x30
        BattleAIShared::StartStopSettings StartStop; // 0x38
        BattleAIShared::EvasiveSettings EvasiveMovement; // 0x40
        Array<BattleAIShared::SpeedControlSettings> SpeedControlSettings; // 0x48
        Float32 LineOfSightAcquiredLatency; // 0x50
        Float32 LineOfSightLostLatency; // 0x54
        Boolean IsPhysicsDrivenLoco; // 0x58
        Boolean Fire; // 0x59
        Boolean UseSpeedControlSettings; // 0x5A
        char pad_0x5B[0x5];
    }; // 0x60
    static_assert(sizeof(AIMoveSettings) == 0x60);
}
#pragma pack(pop)