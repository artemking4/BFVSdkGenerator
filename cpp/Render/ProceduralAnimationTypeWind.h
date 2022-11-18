// Object: ProceduralAnimationTypeWind
// ClassId: 4474
// RuntimeId: 19722
// TypeInfo: 0x0000000144F1D280
#include "../Render/ProceduralAnimationTypeSimple.h"
#include "../Render/ProceduralAnimationWindMethod.h"
#include "../Render/ProceduralAnimationForceSettings.h"

#pragma pack(push, 8)
namespace Render {
    class ProceduralAnimationTypeWind : public Render::ProceduralAnimationTypeSimple {
        Render::ProceduralAnimationWindMethod WindMethod; // 0x30
        Render::ProceduralAnimationForceSettings ForceSettings; // 0x34
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(ProceduralAnimationTypeWind) == 0x50);
}
#pragma pack(pop)