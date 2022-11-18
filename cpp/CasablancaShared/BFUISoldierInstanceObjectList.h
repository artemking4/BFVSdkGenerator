// Object: BFUISoldierInstanceObjectList
// ClassId: 5488
// RuntimeId: 56270
// TypeInfo: 0x0000000144D7FBA0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUISoldierInstanceObject> Soldiers; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISoldierInstanceObjectList) == 0x20);
}
#pragma pack(pop)