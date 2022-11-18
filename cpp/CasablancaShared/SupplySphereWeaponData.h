// Object: SupplySphereWeaponData
// ClassId: 5228
// RuntimeId: 39584
// TypeInfo: 0x0000000144D407D0
#include "../CasablancaShared/BFWeaponData.h"
#include "../SoldierShared/SupplyData.h"
#include "../CasablancaShared/SupplySphereProjectileOffsetByPose.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SupplySphereWeaponData : public CasablancaShared::BFWeaponData {
        SoldierShared::SupplyData SupplyData; // 0x28
        Array<CasablancaShared::SupplySphereProjectileOffsetByPose> ProjectileOffsetsByPose; // 0x58
    }; // 0x60
    static_assert(sizeof(SupplySphereWeaponData) == 0x60);
}
#pragma pack(pop)