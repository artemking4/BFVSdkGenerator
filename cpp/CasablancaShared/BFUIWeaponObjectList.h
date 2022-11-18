// Object: BFUIWeaponObjectList
// ClassId: 5507
// RuntimeId: 12189
// TypeInfo: 0x0000000144D845A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponObject> Weapons; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponObjectList) == 0x20);
}
#pragma pack(pop)