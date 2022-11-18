// Object: BFUISoldierArchetypeObjectList
// ClassId: 5486
// RuntimeId: 51845
// TypeInfo: 0x0000000144D849A0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUISoldierArchetypeObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierArchetypeObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUISoldierArchetypeObject> Archetypes; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISoldierArchetypeObjectList) == 0x20);
}
#pragma pack(pop)