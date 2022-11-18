// Object: BFUISpecTreeItemInstanceObjectList
// ClassId: 5491
// RuntimeId: 48255
// TypeInfo: 0x0000000144D83DA0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpecTreeItemInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUISpecTreeItemInstanceObject> SpecTreeItems; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISpecTreeItemInstanceObjectList) == 0x20);
}
#pragma pack(pop)