// Object: BFUIWeaponClassObjectList
// ClassId: 5505
// RuntimeId: 53948
// TypeInfo: 0x0000000144D84620
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIWeaponClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponClassObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIWeaponClassObject> Classes; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIWeaponClassObjectList) == 0x20);
}
#pragma pack(pop)