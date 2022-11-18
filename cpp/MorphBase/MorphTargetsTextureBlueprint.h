// Object: MorphTargetsTextureBlueprint
// ClassId: 252
// RuntimeId: 59245
// TypeInfo: 0x0000000144EA2650
#include "../Entity/Blueprint.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphTargetsTextureBlueprint : public Entity::Blueprint {
        Render::TextureAsset Texture; // 0x48
    }; // 0x50
    static_assert(sizeof(MorphTargetsTextureBlueprint) == 0x50);
}
#pragma pack(pop)