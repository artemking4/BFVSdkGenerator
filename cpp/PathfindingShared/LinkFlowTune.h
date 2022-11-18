// Object: LinkFlowTune
// ClassId: 4229
// RuntimeId: 15691
// TypeInfo: 0x0000000144EAC200
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class LinkFlowTune : public Core::DataContainer {
        Uint32 MaxSimultaneous; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(LinkFlowTune) == 0x20);
}
#pragma pack(pop)