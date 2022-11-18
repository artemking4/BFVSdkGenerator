// Object: CharacterStateTriggerEntityData
// ClassId: 3457
// RuntimeId: 46435
// TypeInfo: 0x0000000144F4A0C0
#include "../GameShared/TriggerEntityData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../GameShared/CharacterPoseAction.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class CharacterStateTriggerEntityData : public GameShared::TriggerEntityData {
        Float32 Pitch; // 0x70
        GameShared::CharacterPoseAction CharacterPose; // 0x74
        SoldierShared::SoldierWeaponUnlockAsset SoldierWeapon; // 0x78
        Uint32 SeatIndex; // 0x80
        Uint32 HealthToSet; // 0x84
        Uint32 HealthToCheck; // 0x88
        Uint32 AmmoToSet; // 0x8C
        GameShared::CharacterPoseAction PoseToCheck; // 0x90
        Uint32 ActiveWeaponSlot; // 0x94
        Float32 MoveSpeedMultiplier; // 0x98
        Float32 SprintSpeedMultiplier; // 0x9C
        Float32 JumpHeightMultiplier; // 0xA0
        Float32 LookSpeedMultiplier; // 0xA4
        Boolean UsePitch; // 0xA8
        Boolean ExcludeConnectedVehicles; // 0xA9
        Boolean StayInVehicleOnMove; // 0xAA
        Boolean LeaveVehicleOnMove; // 0xAB
        Boolean ClearAreaOnMove; // 0xAC
        Boolean CheckAllWeapons; // 0xAD
        Boolean CheckOnlyReadyWeapons; // 0xAE
        Boolean ContinueToCheckIfHoldingWrongWeapon; // 0xAF
        Boolean ShouldCheckSeatIndex; // 0xB0
        Boolean AllowRemoteControlledVehicles; // 0xB1
        Boolean InstantDeath; // 0xB2
        Boolean CheckHealthGreaterOrEqual; // 0xB3
        Boolean UseExitPointWhenLeavingVehicle; // 0xB4
        Boolean DisablePhysicsWhenLeavingVehicle; // 0xB5
        Boolean LeaveRemoteVehicles; // 0xB6
        char pad_0xB7[0x9];
    }; // 0xC0
    static_assert(sizeof(CharacterStateTriggerEntityData) == 0xC0);
}
#pragma pack(pop)