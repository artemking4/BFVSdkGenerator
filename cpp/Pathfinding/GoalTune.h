// Object: GoalTune
// ClassId: 524
// RuntimeId: 4563
// TypeInfo: 0x0000000144EAA770
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class GoalTune : public Core::Asset {
        Float32 preferredTurningRadius; // 0x20
        Boolean useCircularApproach; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(GoalTune) == 0x28);
}
#pragma pack(pop)