// Object: PuppetTune
// ClassId: 675
// RuntimeId: 23991
// TypeInfo: 0x0000000144EAA8F0
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Pathfinding/RepulsionConstraintMode.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class PuppetTune : public Core::Asset {
        Pathfinding::RepulsionConstraintMode repulsionConstraintMode; // 0x20
        Boolean exitPuppetInObstacles; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(PuppetTune) == 0x28);
}
#pragma pack(pop)