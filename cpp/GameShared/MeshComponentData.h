// Object: MeshComponentData
// ClassId: 1803
// RuntimeId: 23659
// TypeInfo: 0x0000000144E8DBE0
#include "../Entity/GameComponentData.h"
#include "../Render/MeshAsset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace GameShared {
    class MeshComponentData : public Entity::GameComponentData {
        Render::MeshAsset Mesh; // 0x80
        Boolean ParentUnlockComponentCanEnable; // 0x88
        char pad_0x89[0x7];
    }; // 0x90
    static_assert(sizeof(MeshComponentData) == 0x90);
}
#pragma pack(pop)