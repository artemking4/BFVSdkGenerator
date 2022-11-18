// Object: BFUIAffectingBoostObjectList
// ClassId: 5475
// RuntimeId: 63154
// TypeInfo: 0x0000000144D30620
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIAffectingBoostObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIAffectingBoostObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIAffectingBoostObject> Boosts; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIAffectingBoostObjectList) == 0x20);
}
#pragma pack(pop)