// Object: ClothEntityData
// ClassId: 3288
// RuntimeId: 54389
// TypeInfo: 0x0000000144E21BD0
#include "../Entity/ComponentEntityData.h"
#include "../Render/MeshAsset.h"
#include "../Physics/ClothAsset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/QualityScalableFloat.h"

#pragma pack(push, 16)
namespace Cloth {
    class ClothEntityData : public Entity::ComponentEntityData {
        Render::MeshAsset Mesh; // 0x80
        Physics::ClothAsset Cloth; // 0x88
        Float32 WindScale; // 0x90
        Core::QualityScalableFloat ActivationRadius; // 0x94
        Core::QualityScalableFloat SmoothBlendOutDistance; // 0xA8
        Float32 AnchorDistanceMultiplier; // 0xBC
        Float32 AnchorFactorMultiplier; // 0xC0
        Float32 SimulationInterpolationTime; // 0xC4
        Boolean CharacterLightingEnable; // 0xC8
        Boolean Enabled; // 0xC9
        Boolean WrapOnGPU; // 0xCA
        Boolean Visible; // 0xCB
        char pad_0xCC[0x4];
    }; // 0xD0
    static_assert(sizeof(ClothEntityData) == 0xD0);
}
#pragma pack(pop)