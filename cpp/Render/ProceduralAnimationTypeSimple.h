// Object: ProceduralAnimationTypeSimple
// ClassId: 4472
// RuntimeId: 45605
// TypeInfo: 0x0000000144F1D380
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Render {
    class ProceduralAnimationTypeSimple : public Core::DataContainer {
        Float32 BendMultiplier; // 0x18
        Float32 WiggleSpeedMultiplier; // 0x1C
        Float32 WindInfluenceMultiplier; // 0x20
        Float32 ProceduralAnimationMaxDistance; // 0x24
        Float32 ProceduralAnimationFadeRange; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ProceduralAnimationTypeSimple) == 0x30);
}
#pragma pack(pop)