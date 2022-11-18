// Object: SoldierEntityData
// ClassId: 3301
// RuntimeId: 36742
// TypeInfo: 0x0000000144F44FB0
#include "../GameShared/CharacterEntityData.h"
#include "../Entity/MaterialDecl.h"
#include "../GameShared/BoneFakePhysicsData.h"
#include "../SoldierShared/SoldierAutoAimData.h"
#include "../SoldierShared/SoldierAimingConstraintsData.h"
#include "../SoldierShared/SoldierHeadCollisionData.h"
#include "../Physics/CharacterPhysicsData.h"
#include "../SoldierShared/SoldierSprintSettingsData.h"
#include "../SoldierShared/SoldierFOVEffect.h"
#include "../Global/Boolean.h"
#include "../SoldierShared/HidableSoldierMeshWeaponPart.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../SoldierShared/BreathControlData.h"
#include "../SoldierShared/CollisionData.h"
#include "../Core/FloatCurve.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"

#pragma pack(push, 16)
namespace SoldierShared {
    class SoldierEntityData : public GameShared::CharacterEntityData {
        Core::Vec3 FLIRKeyColor; // 0x100
        Entity::MaterialDecl FootMaterialPair; // 0x110
        Entity::MaterialDecl HeadMaterialPair; // 0x114
        Array<GameShared::BoneFakePhysicsData> BoneFakePhysics; // 0x118
        SoldierShared::SoldierAutoAimData AutoAim; // 0x120
        SoldierShared::SoldierAimingConstraintsData AimingConstraints; // 0x128
        SoldierShared::SoldierHeadCollisionData HeadCollision; // 0x130
        Physics::CharacterPhysicsData CharacterPhysics; // 0x138
        SoldierShared::SoldierSprintSettingsData SprintSettings; // 0x140
        SoldierShared::SoldierFOVEffect SoldierFOVEffectSettings; // 0x148
        Array<SoldierShared::HidableSoldierMeshWeaponPart> HidableMeshParts; // 0x150
        Float32 ImpulseReactionTime; // 0x158
        char pad_0x15C[0x4];
        Array<Int32> AbortSpawnInvisibilityInputs; // 0x160
        Array<SoldierShared::BreathControlData> BreathControl; // 0x168
        SoldierShared::CollisionData CollisionInfo; // 0x170
        Core::FloatCurve FallDamageCurveFreeFall; // 0x178
        Core::FloatCurve FallDamageCurveParachute; // 0x180
        Float32 FallDamageDeduction; // 0x188
        char pad_0x18C[0x4];
        MotionMachineShared::BoolChannelData PerformingLandingRollChannel; // 0x190
        Float32 FLIRValue; // 0x198
        Float32 ExplosionDamageModifier; // 0x19C
        Float32 RegenerationDelayModifier; // 0x1A0
        Uint32 BlueprintNameHash; // 0x1A4
        Float32 VisualCullScreenArea; // 0x1A8
        char pad_0x1AC[0x4];
        MotionMachineShared::FloatChannelData LegAngleChannel; // 0x1B0
        MotionMachineShared::BoolChannelData Disable1pRootOverrideChannel; // 0x1B8
        MotionMachineShared::TransformChannelData ShootSpaceChannel; // 0x1C0
        Float32 SlidingInputTimeout; // 0x1C8
        Float32 SlidingCooldown; // 0x1CC
        Boolean UseSpineXRotation; // 0x1D0
        Boolean ShowWeaponWhenDead; // 0x1D1
        Boolean EnableGroundmapLighting; // 0x1D2
        Boolean LowerGunOnOwnTeam; // 0x1D3
        Boolean ProximityCheck; // 0x1D4
        Boolean FreeSpaceCheck; // 0x1D5
        Boolean UpdateRegenerationDelayModifierOnChanged; // 0x1D6
        Boolean CollisionEnabled; // 0x1D7
        Boolean PhysicsControlled; // 0x1D8
        Boolean IsPushable; // 0x1D9
        Boolean HumanPlayerControlled; // 0x1DA
        Boolean DisableOnPlayerSetEventIfDead; // 0x1DB
        Boolean ShowNametag; // 0x1DC
        Boolean ForceAnimationToStandPose; // 0x1DD
        Boolean AimFollowEyeTransform; // 0x1DE
        Boolean Hide3p; // 0x1DF
        Boolean AllowSprintInterruptingActions; // 0x1E0
        Boolean IsVaulting; // 0x1E1
        Boolean EnableGasmaskInputBlocking; // 0x1E2
        Boolean AllowFiringWhileSprinting; // 0x1E3
        Boolean AllowAutoSprint; // 0x1E4
        Boolean InterruptAutoSprintOnlyWithThrottleAndStrafe; // 0x1E5
        Boolean ShouldBlockKitDrop; // 0x1E6
        Boolean DisableSoldierToSoldierCollisionDamage; // 0x1E7
        Boolean LegAngleUsedToComputeBounds; // 0x1E8
        Boolean SlidingFromCrouchAllowed; // 0x1E9
        char pad_0x1EA[0x6];
    }; // 0x1F0
    static_assert(sizeof(SoldierEntityData) == 0x1F0);
}
#pragma pack(pop)