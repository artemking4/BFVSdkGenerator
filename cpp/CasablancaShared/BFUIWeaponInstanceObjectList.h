// Object: BFUIWeaponInstanceObjectList
// ClassId: 5506
// RuntimeId: 21239
// TypeInfo: 0x0000000144D7F420
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponInstanceObject> Weapons; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponInstanceObjectList) == 0x20);
}
#pragma pack(pop)