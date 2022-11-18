// Object: JumperTune
// ClassId: 539
// RuntimeId: 4417
// TypeInfo: 0x0000000144EAA970
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class JumperTune : public Core::Asset {
        Float32 speed; // 0x20
        Float32 arcFraction; // 0x24
        Float32 turnBeforeJumpAngle; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(JumperTune) == 0x30);
}
#pragma pack(pop)