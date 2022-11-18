// Object: SoldierPoseMeshComponentData
// ClassId: 1844
// RuntimeId: 17540
// TypeInfo: 0x0000000144F44D30
#include "../Entity/GameComponentData.h"
#include "../Render/MeshAsset.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierPoseMeshComponentData : public Entity::GameComponentData {
        Render::MeshAsset StandMesh; // 0x80
        Render::MeshAsset CrouchMesh; // 0x88
        Render::MeshAsset ProneMesh; // 0x90
        Render::MeshAsset ParachuteMesh; // 0x98
    }; // 0xA0
    static_assert(sizeof(SoldierPoseMeshComponentData) == 0xA0);
}
#pragma pack(pop)