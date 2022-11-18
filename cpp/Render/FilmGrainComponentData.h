// Object: FilmGrainComponentData
// ClassId: 1887
// RuntimeId: 35353
// TypeInfo: 0x0000000144F1C900
#include "../Entity/VisualEnvironmentComponentData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec2.h"
#include "../Core/Vec3.h"
#include "../RenderBase/TextureBaseAsset.h"
#include "../Global/Float32.h"
#include "../Global/Uint16.h"

#pragma pack(push, 16)
namespace Render {
    class FilmGrainComponentData : public Entity::VisualEnvironmentComponentData {
        Core::Vec3 ColorScale; // 0x90
        Core::Vec2 TextureScale; // 0xA0
        RenderBase::TextureBaseAsset Texture; // 0xA8
        Float32 GrainGreyFraction; // 0xB0
        Float32 GrainShadowThreshold; // 0xB4
        Float32 GrainHighlightThreshold; // 0xB8
        Float32 GrainShadowIntensity; // 0xBC
        Float32 GrainHighlightIntensity; // 0xC0
        Uint16 FieldFlagOverride0; // 0xC4
        Boolean Enable; // 0xC6
        Boolean LinearFilteringEnable; // 0xC7
        Boolean RandomEnable; // 0xC8
        Boolean GrainLuminanceControlEnable; // 0xC9
        char pad_0xCA[0x6];
    }; // 0xD0
    static_assert(sizeof(FilmGrainComponentData) == 0xD0);
}
#pragma pack(pop)