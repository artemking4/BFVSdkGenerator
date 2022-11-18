// Object: ResupplyVehicleAmmoWeaponData
// ClassId: 5222
// RuntimeId: 24978
// TypeInfo: 0x0000000144D01D20
#include "../CasablancaShared/ResupplyVehicleWeaponBaseData.h"
#include "../SoldierShared/VehicleAmmoType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ResupplyVehicleAmmoWeaponData : public CasablancaShared::ResupplyVehicleWeaponBaseData {
        SoldierShared::VehicleAmmoType AmmoType; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(ResupplyVehicleAmmoWeaponData) == 0x40);
}
#pragma pack(pop)