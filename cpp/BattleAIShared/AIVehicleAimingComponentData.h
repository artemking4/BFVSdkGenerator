// Object: AIVehicleAimingComponentData
// ClassId: 1710
// RuntimeId: 2417
// TypeInfo: 0x0000000144C06160
#include "../DiceShooterShared/AimInputComponentData.h"
#include "../BattleAIShared/AIVehicleAimingConstraints.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIVehicleAimingComponentData : public DiceShooterShared::AimInputComponentData {
        Core::Vec3 TargetPositionOverride; // 0x80
        BattleAIShared::AIVehicleAimingConstraints PitchConstraints; // 0x90
        BattleAIShared::AIVehicleAimingConstraints YawConstraints; // 0x9C
        Float32 LoseInterestTime; // 0xA8
        Boolean EnableAiming; // 0xAC
        Boolean UseTargetPositionOverride; // 0xAD
        Boolean AimThroughShootSpace; // 0xAE
        char pad_0xAF[0x1];
    }; // 0xB0
    static_assert(sizeof(AIVehicleAimingComponentData) == 0xB0);
}
#pragma pack(pop)