// Object: SlicedTextureAsset
// ClassId: 808
// RuntimeId: 30962
// TypeInfo: 0x0000000144F27090
#include "../Render/TextureAsset.h"
#include "../RimeShared/SlicedTextureBorder.h"
#include "../RimeShared/SlicedTextureRepeatMode.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace RimeShared {
    class SlicedTextureAsset : public Render::TextureAsset {
        RimeShared::SlicedTextureBorder Slices; // 0x30
        RimeShared::SlicedTextureBorder Padding; // 0x40
        RimeShared::SlicedTextureRepeatMode VerticalRepeat; // 0x50
        RimeShared::SlicedTextureRepeatMode HorizontalRepeat; // 0x54
        Boolean FillCenter; // 0x58
        char pad_0x59[0x7];
    }; // 0x60
    static_assert(sizeof(SlicedTextureAsset) == 0x60);
}
#pragma pack(pop)