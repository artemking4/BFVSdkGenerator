// Object: TextureBaseAsset
// ClassId: 803
// RuntimeId: 62588
// TypeInfo: 0x0000000144F23F90
#include "../Core/Asset.h"
#include "../Global/ResourceRef.h"

namespace RenderBase {
    class TextureBaseAsset : public Core::Asset {
        ResourceRef Resource; // 0x20
    }; // 0x28
    static_assert(sizeof(TextureBaseAsset) == 0x28);
}