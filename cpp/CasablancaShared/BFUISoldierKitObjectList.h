// Object: BFUISoldierKitObjectList
// ClassId: 5489
// RuntimeId: 26856
// TypeInfo: 0x0000000144D84920
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUISoldierKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierKitObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUISoldierKitObject> Kits; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISoldierKitObjectList) == 0x20);
}
#pragma pack(pop)