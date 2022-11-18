// Object: TurnInPlaceTune
// ClassId: 846
// RuntimeId: 48593
// TypeInfo: 0x0000000144EAAAF0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class TurnInPlaceTune : public Core::Asset {
        Float32 whenMovingAngle; // 0x20
        Float32 whenStoppedAngle; // 0x24
        Float32 speed; // 0x28
        Boolean enableUTurn; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(TurnInPlaceTune) == 0x30);
}
#pragma pack(pop)