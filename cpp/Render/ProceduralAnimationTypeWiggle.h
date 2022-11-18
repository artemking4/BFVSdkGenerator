// Object: ProceduralAnimationTypeWiggle
// ClassId: 4473
// RuntimeId: 53958
// TypeInfo: 0x0000000144F1D300
#include "../Render/ProceduralAnimationTypeSimple.h"
#include "../Render/ProceduralAnimationWiggleMethod.h"

#pragma pack(push, 8)
namespace Render {
    class ProceduralAnimationTypeWiggle : public Render::ProceduralAnimationTypeSimple {
        Render::ProceduralAnimationWiggleMethod WiggleMethod; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ProceduralAnimationTypeWiggle) == 0x38);
}
#pragma pack(pop)