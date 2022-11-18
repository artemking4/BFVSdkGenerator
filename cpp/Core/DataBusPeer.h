// Object: DataBusPeer
// ClassId: 1648
// RuntimeId: 30667
// TypeInfo: 0x0000000144BE8B70
#include "../Core/GameDataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Core {
    class DataBusPeer : public Core::GameDataContainer {
        Uint32 Flags; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(DataBusPeer) == 0x20);
}
#pragma pack(pop)