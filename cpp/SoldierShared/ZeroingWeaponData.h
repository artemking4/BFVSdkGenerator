// Object: ZeroingWeaponData
// ClassId: 5231
// RuntimeId: 21133
// TypeInfo: 0x0000000144F498C0
#include "../WeaponShared/WeaponData.h"
#include "../SoldierShared/ZeroingModifierUnlock.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ZeroingWeaponData : public WeaponShared::WeaponData {
        Array<SoldierShared::ZeroingModifierUnlock> ZeroingModifierUnlocks; // 0x20
    }; // 0x28
    static_assert(sizeof(ZeroingWeaponData) == 0x28);
}
#pragma pack(pop)