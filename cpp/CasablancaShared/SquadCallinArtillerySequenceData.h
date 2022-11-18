// Object: SquadCallinArtillerySequenceData
// ClassId: 4904
// RuntimeId: 23943
// TypeInfo: 0x0000000144D351B0
#include "../Core/DataContainer.h"
#include "../WeaponShared/ProjectileBlueprint.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/SquadCallinArtilleryTargetingTypeBase.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadCallinArtillerySequenceData : public Core::DataContainer {
        WeaponShared::ProjectileBlueprint Projectile; // 0x18
        SoldierShared::SoldierWeaponUnlockAsset Weapon; // 0x20
        Uint32 DistantFiringSoundHash; // 0x28
        Float32 DistantFiringSoundLeadTime; // 0x2C
        Float32 FiringHeight; // 0x30
        Float32 FiringAngle; // 0x34
        Float32 InitialSpeed; // 0x38
        Float32 InitialDelay; // 0x3C
        Int32 ProjectileCount; // 0x40
        Float32 MinBetweenShotsDelay; // 0x44
        Float32 MaxBetweenShotsDelay; // 0x48
        char pad_0x4C[0x4];
        CasablancaShared::SquadCallinArtilleryTargetingTypeBase TargetingData; // 0x50
    }; // 0x58
    static_assert(sizeof(SquadCallinArtillerySequenceData) == 0x58);
}
#pragma pack(pop)