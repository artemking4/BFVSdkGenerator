// Object: MorphStatic
// ClassId: 576
// RuntimeId: 19499
// TypeInfo: 0x0000000144EA24D0
#include "../Core/Asset.h"
#include "../Render/MeshVariationEntry.h"
#include "../Render/MeshAsset.h"
#include "../Global/Int32.h"
#include "../Render/VariationLink.h"
#include "../MorphBase/ShaderParameter.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphStatic : public Core::Asset {
        Array<Render::MeshVariationEntry> RuntimeVariations; // 0x20
        ResourceRef MorphResource; // 0x28
        Render::MeshAsset RuntimeHeadBase; // 0x30
        Render::MeshAsset RuntimeHair; // 0x38
        Render::MeshAsset RuntimeBeard; // 0x40
        Int32 SelectedPresetIndex; // 0x48
        char pad_0x4C[0x4];
        Array<Render::VariationLink> VariationLinks; // 0x50
        Array<MorphBase::ShaderParameter> SliderParameters; // 0x58
        Array<MorphBase::ShaderParameter> ChannelParameters; // 0x60
        Array<MorphBase::ShaderParameter> ColorParameters; // 0x68
        Array<MorphBase::ShaderParameter> TextureParameters; // 0x70
    }; // 0x78
    static_assert(sizeof(MorphStatic) == 0x78);
}
#pragma pack(pop)