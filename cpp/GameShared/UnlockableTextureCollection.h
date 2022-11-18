// Object: UnlockableTextureCollection
// ClassId: 5558
// RuntimeId: 65053
// TypeInfo: 0x0000000144E81940
#include "../Core/DataContainer.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class UnlockableTextureCollection : public Core::DataContainer {
        Render::TextureAsset DefaultValue; // 0x18
    }; // 0x20
    static_assert(sizeof(UnlockableTextureCollection) == 0x20);
}
#pragma pack(pop)