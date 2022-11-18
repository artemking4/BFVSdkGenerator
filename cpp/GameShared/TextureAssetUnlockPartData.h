// Object: TextureAssetUnlockPartData
// ClassId: 5163
// RuntimeId: 26133
// TypeInfo: 0x0000000144E81B40
#include "../Core/DataContainer.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class TextureAssetUnlockPartData : public Core::DataContainer {
        Render::TextureAsset Texture; // 0x18
    }; // 0x20
    static_assert(sizeof(TextureAssetUnlockPartData) == 0x20);
}
#pragma pack(pop)