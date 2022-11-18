// Object: DecalTemplateAsset
// ClassId: 464
// RuntimeId: 21071
// TypeInfo: 0x0000000144DA57C0
#include "../RenderBase/DecalTemplateBaseAsset.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"
#include "../RenderBase/DecalAtlasTile.h"
#include "../RenderBase/SurfaceShaderInstanceDataStruct.h"
#include "../RenderBase/DecalType.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DecalBase {
    class DecalTemplateAsset : public RenderBase::DecalTemplateBaseAsset {
        Float32 Size; // 0x20
        Float32 RandomSize; // 0x24
        Float32 Rotation; // 0x28
        Float32 RandomRotation; // 0x2C
        Float32 ClipAngle; // 0x30
        Float32 ProximityRadiusFactor; // 0x34
        Float32 NormalOffset; // 0x38
        RenderBase::DecalAtlasTile AtlasTile; // 0x3C
        RenderBase::SurfaceShaderInstanceDataStruct Shader; // 0x50
        RenderBase::DecalType DecalType; // 0x78
        Int32 MeshUVIndex; // 0x7C
        Uint8 SortingPriority; // 0x80
        Boolean ProjectMultiple; // 0x81
        char pad_0x82[0x6];
    }; // 0x88
    static_assert(sizeof(DecalTemplateAsset) == 0x88);
}
#pragma pack(pop)