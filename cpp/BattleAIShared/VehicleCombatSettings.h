// Object: VehicleCombatSettings
// ClassId: 902
// RuntimeId: 787
// TypeInfo: 0x0000000144C06B60
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/CombatSettings.h"
#include "../BattleAIShared/EvadeSettings.h"
#include "../BattleAIShared/VehicleVsVehicle.h"
#include "../BattleAIShared/VehicleVsSoldier.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class VehicleCombatSettings : public Core::Asset {
        Float32 SixthSenseRadius; // 0x20
        Float32 SixthSenseTime; // 0x24
        Float32 ForgetTargetDistance; // 0x28
        Float32 StopAndFireTimeout; // 0x2C
        Float32 MoveTimeout; // 0x30
        BattleAIShared::CombatSettings CombatSettings; // 0x34
        BattleAIShared::EvadeSettings EvadeSettings; // 0x4C
        BattleAIShared::VehicleVsVehicle VehicleVsVehicle; // 0x68
        BattleAIShared::VehicleVsSoldier VehicleVsSoldier; // 0x78
        Float32 TurnToAlignTimer; // 0x88
        Float32 TimeBeforeFollowEntersStopAndFire; // 0x8C
        Float32 TimeBeforeFollowEntersSearch; // 0x90
        Float32 TimeBeforeStopAndFireEntersFollow; // 0x94
        Float32 TimeBeforeEvadeEntersFollow; // 0x98
        Boolean InterruptOnDamage; // 0x9C
        Boolean TurnToAlignWeapons; // 0x9D
        char pad_0x9E[0x2];
    }; // 0xA0
    static_assert(sizeof(VehicleCombatSettings) == 0xA0);
}
#pragma pack(pop)