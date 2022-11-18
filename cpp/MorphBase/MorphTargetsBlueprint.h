// Object: MorphTargetsBlueprint
// ClassId: 251
// RuntimeId: 59463
// TypeInfo: 0x0000000144EA26D0
#include "../Entity/Blueprint.h"
#include "../Render/MeshAsset.h"
#include "../MorphBase/ModelAssetType.h"

#pragma pack(push, 8)
namespace MorphBase {
    class MorphTargetsBlueprint : public Entity::Blueprint {
        Render::MeshAsset Mesh; // 0x48
        MorphBase::ModelAssetType ModelAssetType; // 0x50
        char pad_0x54[0x4];
    }; // 0x58
    static_assert(sizeof(MorphTargetsBlueprint) == 0x58);
}
#pragma pack(pop)