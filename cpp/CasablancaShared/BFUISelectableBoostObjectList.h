// Object: BFUISelectableBoostObjectList
// ClassId: 5485
// RuntimeId: 53421
// TypeInfo: 0x0000000144D305A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUISelectableBoostObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectableBoostObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUISelectableBoostObject> Boosts; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISelectableBoostObjectList) == 0x20);
}
#pragma pack(pop)