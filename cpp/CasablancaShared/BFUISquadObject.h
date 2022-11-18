// Object: BFUISquadObject
// ClassId: 1251
// RuntimeId: 29407
// TypeInfo: 0x0000000144D3F060
#include "../Core/DataContainer.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/SquadId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISquadObject : public Core::DataContainer {
        GameShared::TeamId TeamId; // 0x18
        GameShared::SquadId SquadId; // 0x1C
    }; // 0x20
    static_assert(sizeof(BFUISquadObject) == 0x20);
}
#pragma pack(pop)