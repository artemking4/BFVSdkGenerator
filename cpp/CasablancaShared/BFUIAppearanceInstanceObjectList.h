// Object: BFUIAppearanceInstanceObjectList
// ClassId: 5476
// RuntimeId: 21126
// TypeInfo: 0x0000000144D7F820
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIAppearanceInstanceObject> Appearances; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIAppearanceInstanceObjectList) == 0x20);
}
#pragma pack(pop)