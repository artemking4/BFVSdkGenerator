// Object: BFUIFactionObjectList
// ClassId: 5483
// RuntimeId: 39077
// TypeInfo: 0x0000000144D84AA0
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFactionObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIFactionObject> Factions; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIFactionObjectList) == 0x20);
}
#pragma pack(pop)