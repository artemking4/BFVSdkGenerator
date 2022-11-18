// Object: BreakablePartComponentData
// ClassId: 1755
// RuntimeId: 16653
// TypeInfo: 0x0000000144E66B40
#include "../Physics/DestructionPartComponentData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Guid.h"
#include "../Audio/SoundAsset.h"
#include "../Core/Vec3.h"
#include "../Core/AxisAlignedBox.h"

#pragma pack(push, 16)
namespace GameShared {
    class BreakablePartComponentData : public Physics::DestructionPartComponentData {
        Core::AxisAlignedBox ClusterBoundingBox; // 0x90
        Uint32 HealthPercentage; // 0xB0
        char pad_0xB4[0x4];
        Array<Guid> MaterialGuids; // 0xB8
        Audio::SoundAsset OnDestructionSound; // 0xC0
        Audio::SoundAsset OnExplosionDestructionSound; // 0xC8
        Audio::SoundAsset OnProjectileDestructionSound; // 0xD0
        Audio::SoundAsset OnCollisionDestructionSound; // 0xD8
        Array<Core::Vec3> ClusterPositions; // 0xE0
        Boolean Collapsable; // 0xE8
        Boolean DestroyNearbyStaticEntities; // 0xE9
        Boolean Indestructible; // 0xEA
        char pad_0xEB[0x5];
    }; // 0xF0
    static_assert(sizeof(BreakablePartComponentData) == 0xF0);
}
#pragma pack(pop)