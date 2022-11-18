// Object: AutoObstacleTune
// ClassId: 154
// RuntimeId: 31887
// TypeInfo: 0x0000000144EAA670
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class AutoObstacleTune : public Core::Asset {
        Float32 delay; // 0x20
        Uint32 obstacleBlockageFlags; // 0x24
        Boolean autoCreateObstacle; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(AutoObstacleTune) == 0x30);
}
#pragma pack(pop)