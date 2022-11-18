// Object: FollowerTune
// ClassId: 503
// RuntimeId: 41206
// TypeInfo: 0x0000000144EAA570
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class FollowerTune : public Core::Asset {
        Float32 circulate_minTime; // 0x20
        Float32 circulate_maxTime; // 0x24
        Float32 startupSlowness; // 0x28
        Float32 startupBulk; // 0x2C
        Float32 packingPadding; // 0x30
        Boolean circulate_enable; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(FollowerTune) == 0x38);
}
#pragma pack(pop)