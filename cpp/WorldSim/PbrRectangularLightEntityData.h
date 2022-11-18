// Object: PbrRectangularLightEntityData
// ClassId: 3391
// RuntimeId: 37917
// TypeInfo: 0x0000000144EC2440
#include "../WorldSim/PbrAnalyticLightEntityData.h"
#include "../RenderBase/RectangularLightShape.h"
#include "../Global/Float32.h"
#include "../RenderBase/TextureBaseAsset.h"

#pragma pack(push, 16)
namespace WorldSim {
    class PbrRectangularLightEntityData : public WorldSim::PbrAnalyticLightEntityData {
        RenderBase::RectangularLightShape Shape; // 0x110
        Float32 OuterAngle; // 0x114
        Float32 InnerAngle; // 0x118
        Float32 Aspect; // 0x11C
        Float32 Width; // 0x120
        Float32 Height; // 0x124
        RenderBase::TextureBaseAsset Texture; // 0x128
    }; // 0x130
    static_assert(sizeof(PbrRectangularLightEntityData) == 0x130);
}
#pragma pack(pop)