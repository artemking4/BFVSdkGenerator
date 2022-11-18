// Object: BFUISpecTreeInstanceObjectList
// ClassId: 5490
// RuntimeId: 58732
// TypeInfo: 0x0000000144D83E20
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUISpecTreeInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpecTreeInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUISpecTreeInstanceObject> SpecTrees; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISpecTreeInstanceObjectList) == 0x20);
}
#pragma pack(pop)