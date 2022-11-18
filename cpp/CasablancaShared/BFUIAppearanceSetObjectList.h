// Object: BFUIAppearanceSetObjectList
// ClassId: 5479
// RuntimeId: 21595
// TypeInfo: 0x0000000144D84720
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIAppearanceSetObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceSetObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIAppearanceSetObject> AppearanceSets; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIAppearanceSetObjectList) == 0x20);
}
#pragma pack(pop)