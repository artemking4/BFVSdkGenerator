// Object: MeshBakerComponentData
// ClassId: 1802
// RuntimeId: 39892
// TypeInfo: 0x0000000144E82240
#include "../Entity/GameComponentData.h"
#include "../Render/MeshAsset.h"
#include "../Core/LinearTransform.h"
#include "../GameShared/LoosePartPhysicsWrapperData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class MeshBakerComponentData : public Entity::GameComponentData {
        Array<Render::MeshAsset> Meshes; // 0x80
        Array<Core::LinearTransform> Transforms; // 0x88
        Array<GameShared::LoosePartPhysicsWrapperData> LoosePartPhysics; // 0x90
        Boolean ParentUnlockComponentCanEnable; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(MeshBakerComponentData) == 0xA0);
}
#pragma pack(pop)