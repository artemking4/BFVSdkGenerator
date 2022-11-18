// Object: BFUISoldierObject
// ClassId: 1246
// RuntimeId: 47708
// TypeInfo: 0x0000000144D3F160
#include "../Core/DataContainer.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISoldierObject : public Core::DataContainer {
        Uint64 UniqueId; // 0x18
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(BFUISoldierObject) == 0x28);
}
#pragma pack(pop)