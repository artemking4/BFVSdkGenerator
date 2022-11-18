// Object: IdleTune
// ClassId: 532
// RuntimeId: 1670
// TypeInfo: 0x0000000144EAA6F0
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class IdleTune : public Core::Asset {
        Float32 tetherDist; // 0x20
        Float32 returnDelay; // 0x24
    }; // 0x28
    static_assert(sizeof(IdleTune) == 0x28);
}
#pragma pack(pop)