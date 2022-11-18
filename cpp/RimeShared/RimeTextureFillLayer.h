// Object: RimeTextureFillLayer
// ClassId: 4577
// RuntimeId: 55291
// TypeInfo: 0x0000000144F27610
#include "../RimeShared/RimeFillStyleLayer.h"
#include "../Core/Vec4.h"
#include "../RenderBase/TextureBaseAsset.h"

#pragma pack(push, 16)
namespace RimeShared {
    class RimeTextureFillLayer : public RimeShared::RimeFillStyleLayer {
        RenderBase::TextureBaseAsset Texture; // 0x30
        char pad_0x38[0x8];
        Core::Vec4 Color; // 0x40
    }; // 0x50
    static_assert(sizeof(RimeTextureFillLayer) == 0x50);
}
#pragma pack(pop)