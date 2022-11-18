// Object: BFUIAppearanceObjectList
// ClassId: 5477
// RuntimeId: 29610
// TypeInfo: 0x0000000144D7F920
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIAppearanceObject> Appearances; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIAppearanceObjectList) == 0x20);
}
#pragma pack(pop)