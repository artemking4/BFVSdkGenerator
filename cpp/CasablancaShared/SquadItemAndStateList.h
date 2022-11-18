// Object: SquadItemAndStateList
// ClassId: 4909
// RuntimeId: 49037
// TypeInfo: 0x0000000144D34900
#include "../Core/DataContainer.h"
#include "../CasablancaShared/SquadItemAndState.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadItemAndStateList : public Core::DataContainer {
        Array<CasablancaShared::SquadItemAndState> ItemAndStateList; // 0x18
    }; // 0x20
    static_assert(sizeof(SquadItemAndStateList) == 0x20);
}
#pragma pack(pop)