// Object: CautionTune
// ClassId: 205
// RuntimeId: 4310
// TypeInfo: 0x0000000144EAA9F0
#include "../Core/Asset.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class CautionTune : public Core::Asset {
        Float32 speedX; // 0x20
        Float32 tightTurnDegrees; // 0x24
    }; // 0x28
    static_assert(sizeof(CautionTune) == 0x28);
}
#pragma pack(pop)