// Object: CharacterMeshComponentData
// ClassId: 1741
// RuntimeId: 48516
// TypeInfo: 0x0000000144E82340
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Render/MeshAsset.h"
#include "../Entity/SkeletonAsset.h"

#pragma pack(push, 16)
namespace GameShared {
    class CharacterMeshComponentData : public Entity::GameComponentData {
        Render::MeshAsset Mesh; // 0x80
        Entity::SkeletonAsset Skeleton; // 0x88
        Boolean UpdateAnimationTransform; // 0x90
        Boolean IsSubSkeleton; // 0x91
        Boolean RenderMesh; // 0x92
        char pad_0x93[0xD];
    }; // 0xA0
    static_assert(sizeof(CharacterMeshComponentData) == 0xA0);
}
#pragma pack(pop)