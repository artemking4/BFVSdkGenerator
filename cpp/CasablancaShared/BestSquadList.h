// Object: BestSquadList
// ClassId: 1273
// RuntimeId: 30321
// TypeInfo: 0x0000000144D41CD0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BestSquadListEntry.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BestSquadList : public Core::DataContainer {
        Array<CasablancaShared::BestSquadListEntry> Squads; // 0x18
    }; // 0x20
    static_assert(sizeof(BestSquadList) == 0x20);
}
#pragma pack(pop)