// Object: BFUISquadList
// ClassId: 1250
// RuntimeId: 50919
// TypeInfo: 0x0000000144D3EFE0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUISquadObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISquadList : public Core::DataContainer {
        Array<CasablancaShared::BFUISquadObject> Squads; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUISquadList) == 0x20);
}
#pragma pack(pop)