// Object: BFUITeamObject
// ClassId: 1259
// RuntimeId: 32955
// TypeInfo: 0x0000000144D3EF60
#include "../Core/DataContainer.h"
#include "../GameShared/TeamId.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUITeamObject : public Core::DataContainer {
        GameShared::TeamId TeamId; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BFUITeamObject) == 0x20);
}
#pragma pack(pop)