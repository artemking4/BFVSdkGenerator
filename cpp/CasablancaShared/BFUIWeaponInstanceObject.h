// Object: BFUIWeaponInstanceObject
// ClassId: 4131
// RuntimeId: 7710
// TypeInfo: 0x0000000144D7F4A0
#include "../CasablancaShared/BFUIWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponInstanceObject : public CasablancaShared::BFUIWeaponObject {
        char pad_0x48[0x10];
    }; // 0x58
    static_assert(sizeof(BFUIWeaponInstanceObject) == 0x58);
}
#pragma pack(pop)