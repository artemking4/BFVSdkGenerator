// Object: OcclusionBasedMarkerEntityData
// ClassId: 3427
// RuntimeId: 14626
// TypeInfo: 0x0000000144C31CF0
#include "../Entity/SpatialEntityData.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"
#include "../Render/TextureAsset.h"

#pragma pack(push, 16)
namespace Casablanca {
    class OcclusionBasedMarkerEntityData : public Entity::SpatialEntityData {
        Core::Vec2 MarkerPlaneDimensions; // 0x60
        Render::TextureAsset MarkerTexture; // 0x68
        Boolean Visible; // 0x70
        char pad_0x71[0xF];
    }; // 0x80
    static_assert(sizeof(OcclusionBasedMarkerEntityData) == 0x80);
}
#pragma pack(pop)