// Object: BreakableModelEntityData
// ClassId: 3298
// RuntimeId: 52713
// TypeInfo: 0x0000000144E668C0
#include "../Physics/GamePhysicsEntityData.h"
#include "../RenderBase/SurfaceShaderBaseAsset.h"
#include "../Global/Float32.h"
#include "../Render/MeshAsset.h"
#include "../Global/Uint32.h"
#include "../WorldBase/EdgeModelsBaseData.h"
#include "../Global/Boolean.h"
#include "../GameShared/DestructionConnection.h"

#pragma pack(push, 16)
namespace GameShared {
    class BreakableModelEntityData : public Physics::GamePhysicsEntityData {
        RenderBase::SurfaceShaderBaseAsset DecalVolumeShader; // 0xA0
        Float32 DecalVolumeScaleFactor; // 0xA8
        char pad_0xAC[0x4];
        Render::MeshAsset Mesh; // 0xB0
        Uint32 BoneCount; // 0xB8
        char pad_0xBC[0x4];
        WorldBase::EdgeModelsBaseData EdgeModelsData; // 0xC0
        Array<GameShared::DestructionConnection> Connections; // 0xC8
        Boolean TerrainShaderNodesEnable; // 0xD0
        char pad_0xD1[0xF];
    }; // 0xE0
    static_assert(sizeof(BreakableModelEntityData) == 0xE0);
}
#pragma pack(pop)