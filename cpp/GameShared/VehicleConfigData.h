// Object: VehicleConfigData
// ClassId: 5563
// RuntimeId: 22962
// TypeInfo: 0x0000000144E9B810
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../GameShared/AeroDynamicPhysicsData.h"
#include "../GameShared/MotorbikeData.h"
#include "../GameShared/MotionDampingData.h"
#include "../Physics/FloatPhysicsData.h"
#include "../GameShared/VehicleInputData.h"
#include "../GameShared/StabilizerSettings.h"
#include "../GameShared/ConstantForceData.h"
#include "../GameShared/StandStillDamping.h"
#include "../GameShared/AutoBrake.h"
#include "../GameShared/InputThrottle.h"
#include "../GameShared/AntiRollBars.h"
#include "../GameShared/CutSceneSettings.h"
#include "../GameShared/InAirForceConfig.h"

#pragma pack(push, 16)
namespace GameShared {
    class VehicleConfigData : public Core::DataContainer {
        Float32 BodyMass; // 0x18
        Float32 GravityModifier; // 0x1C
        Core::Vec3 CenterOfMass; // 0x20
        Core::Vec3 CenterOfMassHandlingOffset; // 0x30
        Core::Vec3 InertiaOverride; // 0x40
        GameShared::StandStillDamping StandStillDamping; // 0x50
        Core::Vec3 ProximityExtScale; // 0xA0
        GameShared::InAirForceConfig InAirConfig; // 0xB0
        Float32 UphillGravityFactor; // 0x110
        Float32 SpeedForFullUphillGravityEffect; // 0x114
        Float32 SpeedForNoUphillGravityEffect; // 0x118
        Float32 HeavyLandingClosingSpeed; // 0x11C
        Float32 HeavyLandingStiffenTime; // 0x120
        char pad_0x124[0x4];
        GameShared::AeroDynamicPhysicsData AeroDynamicPhysics; // 0x128
        GameShared::MotorbikeData MotorbikePhysics; // 0x130
        GameShared::MotionDampingData MotionDamping; // 0x138
        Physics::FloatPhysicsData FloatPhysics; // 0x140
        GameShared::VehicleInputData Input; // 0x148
        Array<GameShared::StabilizerSettings> Stabilizers; // 0x198
        Array<GameShared::ConstantForceData> ConstantForce; // 0x1A0
        Float32 AligningTorqueFactor; // 0x1A8
        Float32 VehicleModeChangeEnteringTime; // 0x1AC
        Float32 VehicleModeChangeStartingTime; // 0x1B0
        Float32 StaticFrictionBreakCollisionMod; // 0x1B4
        Float32 StaticFrictionBreakVelocityMod; // 0x1B8
        Float32 CoefficientOfAirFriction; // 0x1BC
        Float32 WindResistanceBaseFactor; // 0x1C0
        Float32 AirDensity; // 0x1C4
        Float32 AirDragArea; // 0x1C8
        Float32 WindResistanceVelocityFactor; // 0x1CC
        Float32 WindResistanceVelocityFactorMin; // 0x1D0
        Float32 WindResistanceVelocityFactorMax; // 0x1D4
        GameShared::AutoBrake AutoBrake; // 0x1D8
        GameShared::InputThrottle UseInputYawAsThrottle; // 0x1E4
        GameShared::AntiRollBars AntiRollBars; // 0x1F8
        Float32 MaxGroundSpeed; // 0x208
        Float32 ProximityHeightTranslation; // 0x20C
        Boolean RunVehicleSimulation; // 0x210
        Boolean UseCenterOfMassHandlingOffsetForWheels; // 0x211
        Boolean ForceAxisAlignedInertiaTensor; // 0x212
        Boolean UseHeavyLandingSuspension; // 0x213
        Boolean CalculateSuspensionWithRespectToCOM; // 0x214
        Boolean UseWindResistance; // 0x215
        Boolean UseGearbox; // 0x216
        Boolean UseNeutralGearOnDriverExit; // 0x217
        Boolean UseTurnAroundForce; // 0x218
        Boolean AllowWheelsToCollideWhenVehicleIsUpsideDown; // 0x219
        Boolean AvoidGettingStuck; // 0x21A
        GameShared::CutSceneSettings CutSceneSettings; // 0x21B
        char pad_0x21D[0x3];
    }; // 0x220
    static_assert(sizeof(VehicleConfigData) == 0x220);
}
#pragma pack(pop)