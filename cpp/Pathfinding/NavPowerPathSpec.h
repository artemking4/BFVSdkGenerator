// Object: NavPowerPathSpec
// ClassId: 8389
// RuntimeId: 16565
// TypeInfo: 0x0000000144EA73F0
#include "../Pathfinding/PathSpec.h"

namespace Pathfinding {
    class NavPowerPathSpec : public Pathfinding::PathSpec {
        char pad_0x18[0x50];
    }; // 0x68
    static_assert(sizeof(NavPowerPathSpec) == 0x68);
}