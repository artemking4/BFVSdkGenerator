// Object: RadiusData
// ClassId: 680
// RuntimeId: 22691
// TypeInfo: 0x0000000144EAAB70
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class RadiusData : public Core::Asset {
        Float32 radius; // 0x20
        Float32 outerCushion; // 0x24
        Float32 innerCushion; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(RadiusData) == 0x30);
}
#pragma pack(pop)