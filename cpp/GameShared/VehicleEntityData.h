// Object: VehicleEntityData
// ClassId: 3302
// RuntimeId: 19115
// TypeInfo: 0x0000000144E8D260
#include "../GameShared/ControllableEntityData.h"
#include "../GameShared/PartLinkData.h"
#include "../Global/CString.h"
#include "../GameShared/UnlockContainer.h"
#include "../Global/Boolean.h"
#include "../GameShared/CaptureTypeEnum.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../GameShared/VehicleHealthZoneData.h"
#include "../EffectBase/EffectBlueprint.h"
#include "../Core/Vec3.h"
#include "../GameShared/ExplosionEntityData.h"
#include "../Render/CompositeMeshAsset.h"
#include "../Entity/ObjectBlueprint.h"
#include "../GameShared/VehicleHudData.h"
#include "../UI/DamageEntityType.h"
#include "../GameShared/VehicleSpawnerType.h"
#include "../GameShared/MPModeData.h"
#include "../GameShared/AngleOfImpactData.h"
#include "../GameShared/VehicleLockableInfoData.h"
#include "../GameShared/VehicleSoundData.h"
#include "../Audio/EntityVoiceOverInfo.h"
#include "../GameShared/CharacterBlueprint.h"
#include "../GameShared/AIVehicleSoundCategory.h"
#include "../GameShared/VehicleScoringCategory.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleEntityData : public GameShared::ControllableEntityData {
        Core::Vec3 CriticallyDamagedEffectPosition; // 0xC0
        Core::Vec3 PreExplosionEffectPosition; // 0xD0
        Core::Vec3 VictimOffsetOverride; // 0xE0
        GameShared::VehicleHudData HudData; // 0xF0
        Core::Vec3 DisturbShapeScale; // 0x170
        Core::Vec3 FLIRKeyColor; // 0x180
        Core::Vec3 IconOffset; // 0x190
        Core::Vec3 InteractionOffset; // 0x1A0
        Core::Vec3 StaticBoundingBoxPaddingMin; // 0x1B0
        Core::Vec3 StaticBoundingBoxPaddingMax; // 0x1C0
        Core::Vec3 BoneCollisionBoundingBoxPaddingMin; // 0x1D0
        Core::Vec3 BoneCollisionBoundingBoxPaddingMax; // 0x1E0
        Array<GameShared::PartLinkData> PartLinks; // 0x1F0
        CString ControllableType; // 0x1F8
        GameShared::UnlockContainer DefaultCustomizationUnlocks; // 0x200
        GameShared::CaptureTypeEnum CaptureType; // 0x208
        Int32 CapturePlayerLimit; // 0x20C
        Float32 DisabledDamageThreshold; // 0x210
        Float32 ClearDisabledDamageThreshold; // 0x214
        Float32 PreDestructionDamageThreshold; // 0x218
        char pad_0x21C[0x4];
        GameShared::VehicleHealthZoneData FrontHealthZone; // 0x220
        GameShared::VehicleHealthZoneData RearHealthZone; // 0x240
        GameShared::VehicleHealthZoneData LeftHealthZone; // 0x260
        GameShared::VehicleHealthZoneData RightHealthZone; // 0x280
        GameShared::VehicleHealthZoneData TopHealthZone; // 0x2A0
        Float32 TopHitHeight; // 0x2C0
        Float32 TopHitAngle; // 0x2C4
        Float32 RegenerationDelay; // 0x2C8
        Float32 RegenerationRate; // 0x2CC
        Float32 ArmorMultiplier; // 0x2D0
        Float32 RegenerationDelayMultiplier; // 0x2D4
        Float32 RegenerationRateMultiplier; // 0x2D8
        Float32 EmergencyRepairHealth; // 0x2DC
        Float32 DecayDelay; // 0x2E0
        Float32 DecayRate; // 0x2E4
        EffectBase::EffectBlueprint CriticallyDamagedEffect; // 0x2E8
        Float32 CriticalDamageTime; // 0x2F0
        char pad_0x2F4[0x4];
        EffectBase::EffectBlueprint PreExplosionEffect; // 0x2F8
        Float32 PreExplosionTime; // 0x300
        char pad_0x304[0x4];
        GameShared::ExplosionEntityData Explosion; // 0x308
        Render::CompositeMeshAsset Mesh; // 0x310
        Render::CompositeMeshAsset SharedMesh; // 0x318
        Entity::ObjectBlueprint SharedMeshBlueprint; // 0x320
        Entity::ObjectBlueprint CockpitMesh; // 0x328
        CString NameSid; // 0x330
        Int32 MaxPlayersInVehicle; // 0x338
        Float32 MinSpeedForMineActivation; // 0x33C
        UI::DamageEntityType DamageTypeIdentifier; // 0x340
        Float32 UpsideDownDamage; // 0x344
        Float32 UpsideDownDamageDelay; // 0x348
        Float32 UpsideDownAngle; // 0x34C
        Float32 WaterDamage; // 0x350
        Float32 BelowWaterDamageDelay; // 0x354
        Float32 WaterDamageOffset; // 0x358
        Int32 RepairAnimationType; // 0x35C
        Float32 VelocityDamageThreshold; // 0x360
        Float32 VelocityDamageMagnifier; // 0x364
        Float32 VerticalImpactAdditionalDamage; // 0x368
        Float32 VerticalDamageAngle; // 0x36C
        Float32 RepairRateModifier; // 0x370
        Float32 KillSoldierCollisionSpeedThreshold; // 0x374
        Float32 ExitSpeedThreshold; // 0x378
        Float32 ExitDirectionSpeedThreshold; // 0x37C
        GameShared::VehicleSpawnerType SpawnerType; // 0x380
        Float32 FLIRValue; // 0x384
        GameShared::MPModeData MPMode; // 0x388
        Float32 ExitCameraSwitchDelay; // 0x38C
        GameShared::AngleOfImpactData AngleOfImpact; // 0x390
        Float32 LockingTimeMultiplier; // 0x3A8
        GameShared::VehicleLockableInfoData VehicleLockableInfo; // 0x3AC
        Float32 HighAltitudeLockHeight; // 0x3BC
        GameShared::VehicleSoundData Sound; // 0x3C0
        Audio::EntityVoiceOverInfo VoiceOverInfo; // 0x3C8
        Float32 SpottingFovScale; // 0x3D0
        char pad_0x3D4[0x4];
        GameShared::CharacterBlueprint CharacterBlueprintOverride; // 0x3D8
        Float32 AIFleeRadius; // 0x3E0
        GameShared::AIVehicleSoundCategory AISoundCategory; // 0x3E4
        GameShared::VehicleScoringCategory ScoringCategory; // 0x3E8
        Float32 CapWaterDepthAt; // 0x3EC
        Uint32 WaterDepthUpdateRate; // 0x3F0
        Boolean AllowVehicleOutsideCombatAreas; // 0x3F4
        Boolean UseTopZone; // 0x3F5
        Boolean HealthZonesShareDamage; // 0x3F6
        Boolean UseProtectedShields; // 0x3F7
        Boolean ShowPlayerHealth; // 0x3F8
        Boolean UseSelfForSelfDestruct; // 0x3F9
        Boolean RandomPreDestruction; // 0x3FA
        Boolean BypassPreDestruction; // 0x3FB
        Boolean DestroyAllComponentsOnDestroyed; // 0x3FC
        Boolean AllowCockpitMesh; // 0x3FD
        Boolean ForegroundRenderCockpitMesh; // 0x3FE
        Boolean MotionBlurMask; // 0x3FF
        Boolean TransparentWithEmittersEnable; // 0x400
        Boolean SuppressDamageByPassengers; // 0x401
        Boolean AllowClientSideSimulation; // 0x402
        Boolean AllowSquadSpawnOnFullVehicle; // 0x403
        Boolean TriggerVehicleDetonation; // 0x404
        Boolean TriggerExplosionPackTriggerTypes; // 0x405
        Boolean IsAffectedByEMP; // 0x406
        Boolean CanBeRepaired; // 0x407
        Boolean CanTakeDynamicFireDamage; // 0x408
        Boolean AlwaysDealCollisionDamage; // 0x409
        Boolean HasExclusiveEntries; // 0x40A
        Boolean OnlyCreatorCanEnter; // 0x40B
        Boolean AllowExclusiveEntryPassThrough; // 0x40C
        Boolean ProhibitEntrySwitching; // 0x40D
        Boolean AllowInactiveEntries; // 0x40E
        Boolean ThrowOutSoldierInsideOnWaterDamage; // 0x40F
        Boolean DeadSoldiersCanBeThrownOut; // 0x410
        Boolean IgnoreSoldierCollisionNormal; // 0x411
        Boolean ChoseExitPointByDirection; // 0x412
        Boolean EnterAllowed; // 0x413
        Boolean SpawnAllowed; // 0x414
        Boolean ExitAllowed; // 0x415
        Boolean EnableGroundmapLighting; // 0x416
        Boolean BlockSpawnArea; // 0x417
        Boolean ShouldDisturbWater; // 0x418
        Boolean IsLockable; // 0x419
        Boolean NeverReportVehicleAsEmpty; // 0x41A
        Boolean AITarget; // 0x41B
        Boolean UseLowAltitudeHeatSignature; // 0x41C
        Boolean UseSpottingTargetComponentForRaycast; // 0x41D
        Boolean EquipmentFakeVehicle; // 0x41E
        Boolean ExplosionPacksAttachable; // 0x41F
        Boolean DamageGiverOverrideOwnerVehicle; // 0x420
        Boolean EnableSubRealm; // 0x421
        Boolean UpdateWhenEmpty; // 0x422
        Boolean UseStaticBoundingBox; // 0x423
        Boolean UseDisplayWithinRadius; // 0x424
        Boolean StickyToEdgeInMap; // 0x425
        Boolean CausesAIToFlee; // 0x426
        Boolean CausesAIToEvade; // 0x427
        Boolean ForceNetworkingInclusion; // 0x428
        char pad_0x429[0x7];
    }; // 0x430
    static_assert(sizeof(VehicleEntityData) == 0x430);
}
#pragma pack(pop)