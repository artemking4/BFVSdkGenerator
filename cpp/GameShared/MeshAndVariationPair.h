// Object: MeshAndVariationPair
// ClassId: 261
// RuntimeId: 62169
// TypeInfo: 0x0000000144E8E5E0
#include "../Entity/ObjectBlueprint.h"
#include "../Render/MeshAsset.h"
#include "../Entity/ObjectVariation.h"

#pragma pack(push, 8)
namespace GameShared {
    class MeshAndVariationPair : public Entity::ObjectBlueprint {
        Render::MeshAsset MeshAsset; // 0x50
        Entity::ObjectVariation Variation; // 0x58
    }; // 0x60
    static_assert(sizeof(MeshAndVariationPair) == 0x60);
}
#pragma pack(pop)