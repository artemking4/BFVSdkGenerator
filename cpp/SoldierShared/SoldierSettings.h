// Object: SoldierSettings
// ClassId: 5024
// RuntimeId: 51453
// TypeInfo: 0x0000000144F44F30
#include "../Core/SystemSettings.h"
#include "../SoldierShared/SoldierWeaponSwitchingData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../GameShared/FOVTransitionData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class SoldierSettings : public Core::SystemSettings {
        SoldierShared::SoldierWeaponSwitchingData SoldierWeaponSwitching; // 0x20
        Uint32 MaxNumberDroppedPickups; // 0x28
        Uint32 MaxVisiblePickupWeapons; // 0x2C
        GameShared::FOVTransitionData DefaultFOVTransitionIn; // 0x30
        GameShared::FOVTransitionData DefaultFOVTransitionOut; // 0x38
        Uint32 InitialArmorVestTier; // 0x40
        Float32 ArmorVestTierSize; // 0x44
        Uint32 MaxArmorTier; // 0x48
        Boolean MovingPlatformEnabled; // 0x4C
        Boolean AllowJumping; // 0x4D
        Boolean AlwaysLoad1pWeaponBundlesForSpectator; // 0x4E
        char pad_0x4F[0x1];
    }; // 0x50
    static_assert(sizeof(SoldierSettings) == 0x50);
}
#pragma pack(pop)