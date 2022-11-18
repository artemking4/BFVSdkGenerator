// Object: BFUISoldierClassObjectList
// ClassId: 5487
// RuntimeId: 41353
// TypeInfo: 0x0000000144D84A20
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierClassObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUISoldierClassObject> Classes; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISoldierClassObjectList) == 0x20);
}
#pragma pack(pop)