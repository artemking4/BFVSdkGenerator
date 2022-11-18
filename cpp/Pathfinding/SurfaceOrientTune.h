// Object: SurfaceOrientTune
// ClassId: 775
// RuntimeId: 36768
// TypeInfo: 0x0000000144EAA5F0
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class SurfaceOrientTune : public Core::Asset {
        Float32 surfaceOrientThreshold; // 0x20
        Float32 surfaceOrientSlerpTime; // 0x24
        Boolean alwaysVerticalOnAutoGen; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(SurfaceOrientTune) == 0x30);
}
#pragma pack(pop)