// Object: SquadCallinRocketData
// ClassId: 401
// RuntimeId: 31857
// TypeInfo: 0x0000000144D35530
#include "../CasablancaShared/SquadCallinBaseData.h"
#include "../WeaponShared/ProjectileBlueprint.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinRocketData : public CasablancaShared::SquadCallinBaseData {
        WeaponShared::ProjectileBlueprint Projectile; // 0x70
        SoldierShared::SoldierWeaponUnlockAsset Weapon; // 0x78
        Float32 InitialSpeed; // 0x80
        Float32 LaunchPitchAngle; // 0x84
    }; // 0x88
    static_assert(sizeof(SquadCallinRocketData) == 0x88);
}
#pragma pack(pop)