// Object: ShaderTextureUnlockPartCollection
// ClassId: 4589
// RuntimeId: 34672
// TypeInfo: 0x0000000144E81740
#include "../GameShared/ShaderCustomizationUnlockPartCollection.h"
#include "../GameShared/TextureReference.h"
#include "../GameShared/TextureUnlockPartData.h"

#pragma pack(push, 8)
namespace GameShared {
    class ShaderTextureUnlockPartCollection : public GameShared::ShaderCustomizationUnlockPartCollection {
        GameShared::TextureReference DefaultTextureReference; // 0x30
        Array<GameShared::TextureUnlockPartData> UnlockParts; // 0x38
    }; // 0x40
    static_assert(sizeof(ShaderTextureUnlockPartCollection) == 0x40);
}
#pragma pack(pop)