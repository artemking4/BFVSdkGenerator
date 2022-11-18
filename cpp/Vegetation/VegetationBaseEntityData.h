// Object: VegetationBaseEntityData
// ClassId: 3340
// RuntimeId: 53509
// TypeInfo: 0x0000000144EB47D0
#include "../Entity/GameComponentEntityData.h"
#include "../Core/LinearTransform.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Render/MeshAsset.h"
#include "../Global/Uint32.h"
#include "../Render/SkinnedMeshAsset.h"
#include "../Physics/PhysicsEntityData.h"
#include "../Vegetation/VegetationPartDestructionInfo.h"

#pragma pack(push, 16)
namespace Vegetation {
    class VegetationBaseEntityData : public Entity::GameComponentEntityData {
        Array<Core::LinearTransform> BasePoseTransforms; // 0x90
        Array<Int32> Hierarchy; // 0x98
        Array<Int32> PartIndirection; // 0xA0
        Array<Int32> PartHierarchy; // 0xA8
        Array<Float32> PartInitialHealths; // 0xB0
        Array<Boolean> BoneIsStem; // 0xB8
        Render::MeshAsset Mesh; // 0xC0
        Uint32 BillboardAngleCount; // 0xC8
        Float32 BillboardAngleBlendLength; // 0xCC
        Render::SkinnedMeshAsset ShadowMesh; // 0xD0
        Physics::PhysicsEntityData PhysicsData; // 0xD8
        Array<Vegetation::VegetationPartDestructionInfo> PartDestructionInfos; // 0xE0
        Boolean LastLodIsBillboard; // 0xE8
        Boolean BillboarAngleBlendSmoothEnable; // 0xE9
        char pad_0xEA[0x6];
    }; // 0xF0
    static_assert(sizeof(VegetationBaseEntityData) == 0xF0);
}
#pragma pack(pop)