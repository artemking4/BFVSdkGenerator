// Object: PathCreationOptions
// ClassId: 615
// RuntimeId: 19203
// TypeInfo: 0x0000000144EAA4F0
#include "../Core/Asset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class PathCreationOptions : public Core::Asset {
        Boolean performInitialNavProbe; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(PathCreationOptions) == 0x28);
}
#pragma pack(pop)