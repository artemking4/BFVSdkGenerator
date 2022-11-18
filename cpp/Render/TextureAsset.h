// Object: TextureAsset
// ClassId: 806
// RuntimeId: 13278
// TypeInfo: 0x0000000144F171D0
#include "../RenderBase/TextureBaseAsset.h"
#include "../Render/GenerateMipmapsFilterType.h"

#pragma pack(push, 8)
namespace Render {
    class TextureAsset : public RenderBase::TextureBaseAsset {
        Render::GenerateMipmapsFilterType GenerateMipmapsFilter; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(TextureAsset) == 0x30);
}
#pragma pack(pop)