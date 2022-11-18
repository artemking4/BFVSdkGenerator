// Object: ReconstructionEntityData
// ClassId: 3439
// RuntimeId: 11661
// TypeInfo: 0x0000000144D12100
#include "../Entity/SpatialEntityData.h"
#include "../Entity/PrefabBlueprint.h"
#include "../CasablancaShared/ReconstructionInstanceData.h"
#include "../CasablancaShared/ReconstructionMeshAssetData.h"
#include "../Global/Uint32.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Entity/ObjectVariation.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/EmptySpawnBoxData.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../CasablancaShared/ReconstructionType.h"
#include "../GameShared/TeamId.h"
#include "../Audio/SoundAsset.h"
#include "../Core/LinearTransform.h"
#include "../GameShared/UnlockAsset.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class ReconstructionEntityData : public Entity::SpatialEntityData {
        Core::Vec3 InteractionOffset; // 0x60
        Core::Vec3 SoundOffset; // 0x70
        Core::LinearTransform IconTransform; // 0x80
        Entity::PrefabBlueprint InitialBlueprint; // 0xC0
        Entity::PrefabBlueprint ConstructedBlueprint; // 0xC8
        Array<CasablancaShared::ReconstructionInstanceData> ReconstructionInstanceData; // 0xD0
        Array<CasablancaShared::ReconstructionMeshAssetData> ReconstructionMeshAssetData; // 0xD8
        Uint32 TotalRadiosityMaterialCount; // 0xE0
        char pad_0xE4[0x4];
        Entity::ObjectBlueprint VisualizationMesh; // 0xE8
        Entity::ObjectVariation VisualizationObjectVariation; // 0xF0
        Int32 AnimationType; // 0xF8
        char pad_0xFC[0x4];
        Array<CasablancaShared::EmptySpawnBoxData> EmptySpawnBoxDatas; // 0x100
        Array<CasablancaShared::EmptySpawnBoxData> BuildDetectionBoxDatas; // 0x108
        Entity::MaterialDecl VisualizationMaterialPair; // 0x110
        Float32 MaxHealth; // 0x114
        Float32 Health1; // 0x118
        Float32 Health2; // 0x11C
        Float32 ContributorHealthThreshold; // 0x120
        CasablancaShared::ReconstructionType ReconstructionType; // 0x124
        GameShared::TeamId TeamRestriction; // 0x128
        char pad_0x12C[0x4];
        Audio::SoundAsset Sound; // 0x130
        Float32 AlwaysShowVisualizationAlphaModifier; // 0x138
        char pad_0x13C[0x4];
        GameShared::UnlockAsset ReconstructionCategorization; // 0x140
        Boolean SpawnOnInit; // 0x148
        Boolean StartConstructed; // 0x149
        Boolean StartEmpty; // 0x14A
        Boolean Enabled; // 0x14B
        Boolean UIEnabled; // 0x14C
        Boolean AlwaysShowVisualization; // 0x14D
        char pad_0x14E[0x2];
    }; // 0x150
    static_assert(sizeof(ReconstructionEntityData) == 0x150);
}
#pragma pack(pop)