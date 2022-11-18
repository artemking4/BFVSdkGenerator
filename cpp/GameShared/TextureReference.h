// Object: TextureReference
// ClassId: 810
// RuntimeId: 6347
// TypeInfo: 0x0000000144E81C40
#include "../Core/Asset.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class TextureReference : public Core::Asset {
        Render::TextureAsset Texture; // 0x20
    }; // 0x28
    static_assert(sizeof(TextureReference) == 0x28);
}
#pragma pack(pop)