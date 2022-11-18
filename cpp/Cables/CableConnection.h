// Object: CableConnection
// ClassId: 1280
// RuntimeId: 41874
// TypeInfo: 0x0000000144C1AB40
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Cables {
    class CableConnection : public Core::DataContainer {
        Core::DataContainer Object; // 0x18
    }; // 0x20
    static_assert(sizeof(CableConnection) == 0x20);
}
#pragma pack(pop)