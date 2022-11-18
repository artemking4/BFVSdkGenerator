// Object: MorphTargets
// ClassId: 577
// RuntimeId: 10534
// TypeInfo: 0x0000000144EA25D0
#include "../Core/Asset.h"
#include "../Render/MeshVariationEntry.h"
#include "../MorphBase/MorphPreset.h"
#include "../MorphBase/MorphShapes.h"
#include "../MorphBase/MorphSliders.h"
#include "../Global/Boolean.h"
#include "../Render/MeshAsset.h"
#include "../MorphBase/SliderShaderParameterTemplate.h"
#include "../MorphBase/ChannelShaderParameterTemplate.h"
#include "../MorphBase/ColorShaderParameterTemplate.h"
#include "../MorphBase/TextureShaderParameterTemplate.h"
#include "../Global/Float32.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphTargets : public Core::Asset {
        Array<Render::MeshVariationEntry> Variations; // 0x20
        ResourceRef MorphTargetsResource; // 0x28
        Array<MorphBase::MorphPreset> Presets; // 0x30
        MorphBase::MorphShapes Shapes; // 0x38
        MorphBase::MorphSliders FeatureBlends; // 0x40
        Array<Render::MeshAsset> HeadMeshAssets; // 0x48
        Array<Render::MeshAsset> HairMeshAssets; // 0x50
        Array<Render::MeshAsset> BeardMeshAssets; // 0x58
        Array<MorphBase::SliderShaderParameterTemplate> SliderShaderParameterTemplates; // 0x60
        Array<MorphBase::ChannelShaderParameterTemplate> ChannelShaderParameterTemplates; // 0x68
        Array<MorphBase::ColorShaderParameterTemplate> ColorShaderParameterTemplates; // 0x70
        Array<MorphBase::TextureShaderParameterTemplate> TextureShaderParameterTemplates; // 0x78
        Float32 EditorVerticalOffset; // 0x80
        Boolean DisableAdditiveBoneOffsets; // 0x84
        char pad_0x85[0x3];
    }; // 0x88
    static_assert(sizeof(MorphTargets) == 0x88);
}
#pragma pack(pop)