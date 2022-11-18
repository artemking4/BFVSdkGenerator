// Object: BFUIWeaponAppearanceSetObject
// ClassId: 4141
// RuntimeId: 53760
// TypeInfo: 0x0000000144D7F2A0
#include "../CasablancaShared/Identifiable.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSetObject : public CasablancaShared::Identifiable {
        char pad_0x18[0x10];
    }; // 0x28
    static_assert(sizeof(BFUIWeaponAppearanceSetObject) == 0x28);
}
#pragma pack(pop)