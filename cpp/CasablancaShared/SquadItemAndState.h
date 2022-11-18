// Object: SquadItemAndState
// ClassId: 4908
// RuntimeId: 49706
// TypeInfo: 0x0000000144D34F30
#include "../Core/DataContainer.h"
#include "../CasablancaShared/SquadItemBase.h"
#include "../CasablancaShared/SquadItemState.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadItemAndState : public Core::DataContainer {
        CasablancaShared::SquadItemBase Item; // 0x18
        CasablancaShared::SquadItemState ItemState; // 0x20
    }; // 0x28
    static_assert(sizeof(SquadItemAndState) == 0x28);
}
#pragma pack(pop)