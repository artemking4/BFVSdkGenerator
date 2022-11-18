// Object: BFUIAppearanceSetInstanceObjectList
// ClassId: 5478
// RuntimeId: 65270
// TypeInfo: 0x0000000144D846A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIAppearanceSetInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAppearanceSetInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIAppearanceSetInstanceObject> AppearanceSets; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIAppearanceSetInstanceObjectList) == 0x20);
}
#pragma pack(pop)