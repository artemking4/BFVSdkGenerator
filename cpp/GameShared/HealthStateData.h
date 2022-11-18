// Object: HealthStateData
// ClassId: 4095
// RuntimeId: 64582
// TypeInfo: 0x0000000144E82A40
#include "../Core/DataContainer.h"
#include "../Entity/GameObjectData.h"
#include "../GameShared/NetworkableLoosePartPhysicsData.h"
#include "../Entity/ObjectBlueprint.h"
#include "../Global/Boolean.h"
#include "../GameShared/BangerSpawnImpulseParams.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../GameShared/HealthStateSpawnObjectsCullingParams.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class HealthStateData : public Core::DataContainer {
        Array<Entity::GameObjectData> Objects; // 0x18
        Array<GameShared::NetworkableLoosePartPhysicsData> LoosePartPhysics; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 SpawnPositionOffset; // 0x30
        Entity::ObjectBlueprint SpawnedBangerBlueprint; // 0x40
        GameShared::BangerSpawnImpulseParams SpawnedBangerImpulseParams; // 0x48
        Float32 Health; // 0x50
        GameShared::HealthStateSpawnObjectsCullingParams SpawnObjectsCullingParams; // 0x54
        Uint32 PartIndex; // 0x6C
        Boolean BangerInheritsObjectVariation; // 0x70
        Boolean SpawnedObjectsInheritObjectVariation; // 0x71
        Boolean CopyDamageToBanger; // 0x72
        Boolean PhysicsEnabled; // 0x73
        Boolean IsTraversable; // 0x74
        Boolean IsWindowVaultTraversable; // 0x75
        Boolean CanSupportOtherParts; // 0x76
        char pad_0x77[0x9];
    }; // 0x80
    static_assert(sizeof(HealthStateData) == 0x80);
}
#pragma pack(pop)