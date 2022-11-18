// Object: DFSimShipDefinitionAsset
// ClassId: 334
// RuntimeId: 60986
// TypeInfo: 0x0000000144C1D980
#include "../Core/DataContainerPolicyAsset.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"
#include "../Casablanca/DFSimProjectileDefinitionAsset.h"
#include "../Global/Uint32.h"
#include "../Entity/ObjectBlueprint.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Audio/SoundAsset.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Casablanca {
    class DFSimShipDefinitionAsset : public Core::DataContainerPolicyAsset {
        GameShared::TeamId TeamId; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 DebugColor; // 0x30
        Float32 CollisionForwardOffset; // 0x40
        Float32 CollisionRadius; // 0x44
        Float32 Health; // 0x48
        Float32 TargetChangeInterval; // 0x4C
        Float32 TargetChangeVariance; // 0x50
        Float32 SpeedDamping; // 0x54
        Float32 SpeedMin; // 0x58
        Float32 SpeedMax; // 0x5C
        Float32 TurnDampingMin; // 0x60
        Float32 TurnDampingMax; // 0x64
        Float32 RollDamping; // 0x68
        Float32 AimSnappingFactor; // 0x6C
        Float32 AimSnappingDamping; // 0x70
        Float32 AimSnappingDotThreshold; // 0x74
        Float32 IdleDirectionChangeInterval; // 0x78
        Float32 IdleDirectionChangeVariance; // 0x7C
        Float32 AdaptToTargetSpeedDotThreshold; // 0x80
        Float32 EvasiveManeuverInterval; // 0x84
        Float32 EvasiveManeuverVariance; // 0x88
        Float32 EvasiveManeuverDotThreshold; // 0x8C
        Float32 EvasiveRollMinDuration; // 0x90
        Float32 EvasiveRollMaxDuration; // 0x94
        Float32 EvasiveRollMinVelocity; // 0x98
        Float32 EvasiveRollMaxVelocity; // 0x9C
        Float32 CollisionAvoidanceDistance; // 0xA0
        Float32 ShootDotThreshold; // 0xA4
        Casablanca::DFSimProjectileDefinitionAsset ProjectileDefinition; // 0xA8
        Uint32 ShootsPerBurstMin; // 0xB0
        Uint32 ShootsPerBurstMax; // 0xB4
        Float32 BurstFireRateMin; // 0xB8
        Float32 BurstFireRateMax; // 0xBC
        Float32 BurstCooldownMin; // 0xC0
        Float32 BurstCooldownMax; // 0xC4
        Entity::ObjectBlueprint Model; // 0xC8
        EffectBase::EffectBlueprint ExplosionEffect; // 0xD0
        Audio::SoundAsset ShipSound; // 0xD8
        Audio::SoundAsset ShipFireSound; // 0xE0
        Float32 DebugScale; // 0xE8
        Boolean ShowInWorldDebug; // 0xEC
        Boolean ShowDebugInfo; // 0xED
        char pad_0xEE[0x2];
    }; // 0xF0
    static_assert(sizeof(DFSimShipDefinitionAsset) == 0xF0);
}
#pragma pack(pop)