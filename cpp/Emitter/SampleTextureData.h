// Object: SampleTextureData
// ClassId: 1593
// RuntimeId: 1328
// TypeInfo: 0x0000000144E2D3C0
#include "../Emitter/EvaluatorData.h"
#include "../Core/Vec4.h"
#include "../Core/Vec3.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace Emitter {
    class SampleTextureData : public Emitter::EvaluatorData {
        Array<Core::Vec4> GradientData; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 ColorIntensityMax; // 0x30
        Core::Vec3 ColorIntensityMin; // 0x40
        Core::Vec2 TextureDimensions; // 0x50
        Float32 TextureOriginU; // 0x58
        Float32 TextureOriginV; // 0x5C
    }; // 0x60
    static_assert(sizeof(SampleTextureData) == 0x60);
}
#pragma pack(pop)