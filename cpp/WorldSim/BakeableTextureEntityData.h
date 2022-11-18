// Object: BakeableTextureEntityData
// ClassId: 3263
// RuntimeId: 22682
// TypeInfo: 0x0000000144EC3340
#include "../Entity/SpatialEntityData.h"
#include "../Global/Boolean.h"
#include "../RenderBase/TextureBaseAsset.h"

namespace WorldSim {
    class BakeableTextureEntityData : public Entity::SpatialEntityData {
        RenderBase::TextureBaseAsset BakedTexture; // 0x60
        Boolean DoNotUpdateBakedTexture; // 0x68
        char pad_0x69[0x7];
    }; // 0x70
    static_assert(sizeof(BakeableTextureEntityData) == 0x70);
}