// Object: BFWeaponData
// ClassId: 5192
// RuntimeId: 51911
// TypeInfo: 0x0000000144D40A50
#include "../WeaponShared/WeaponData.h"
#include "../CasablancaShared/ContextSpecificModifierUnlock.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFWeaponData : public WeaponShared::WeaponData {
        Array<CasablancaShared::ContextSpecificModifierUnlock> ContextSpecificWeaponModifierUnlocks; // 0x20
    }; // 0x28
    static_assert(sizeof(BFWeaponData) == 0x28);
}
#pragma pack(pop)