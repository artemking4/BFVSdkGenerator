// Object: WheelConfigData
// ClassId: 5714
// RuntimeId: 48400
// TypeInfo: 0x0000000144E9AF90
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Physics/RotationBodyData.h"
#include "../Entity/MaterialDecl.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../GameShared/SpringData.h"
#include "../Core/FloatCurve.h"
#include "../Core/Vec2.h"
#include "../GameShared/Curve2D.h"
#include "../GameShared/SensitivityAtVelocity.h"
#include "../GameShared/TrackedSteeringAtVelocity.h"
#include "../GameShared/FrictionScaleAtVelocity.h"
#include "../GameShared/CutSceneSettingsWheel.h"

#pragma pack(push, 16)
namespace GameShared {
    class WheelConfigData : public Core::DataContainer {
        Float32 Radius; // 0x18
        Float32 Width; // 0x1C
        Core::Vec3 Offset; // 0x20
        Core::Vec3 Inertia; // 0x30
        Float32 Mass; // 0x40
        char pad_0x44[0x4];
        Physics::RotationBodyData RotationBody; // 0x48
        Entity::MaterialDecl CollisionMaterialPair; // 0x50
        Int32 DrivingType; // 0x54
        Int32 SteeringType; // 0x58
        Int32 RotationDirectionIndex; // 0x5C
        Int32 SteeringAngleIndex; // 0x60
        Int32 EngineIndex; // 0x64
        GameShared::SpringData Spring; // 0x68
        Float32 RollingResistanceBaseFactor; // 0xA4
        Float32 RollingResistanceVelocityFactor; // 0xA8
        Float32 EngineBrakeFactor; // 0xAC
        Core::FloatCurve RotationalRestrictionCurve; // 0xB0
        Float32 Resistance; // 0xB8
        char pad_0xBC[0x4];
        Array<Core::Vec2> TransmissionLoss; // 0xC0
        Float32 BrakeFactor; // 0xC8
        Float32 HandBrakeFactor; // 0xCC
        Float32 DiffGearRatio; // 0xD0
        char pad_0xD4[0x4];
        GameShared::Curve2D SteerInertia; // 0xD8
        Array<GameShared::SensitivityAtVelocity> SteeringSensitivity; // 0xE0
        GameShared::TrackedSteeringAtVelocity TrackedSteering; // 0xE8
        Float32 TrackedTurnSpeedLimit; // 0x110
        Float32 TrackedForwardSpeedLimit; // 0x114
        Float32 TrackedSlipSteerReductionScale; // 0x118
        Float32 TrackedSteeringBoostOnOppositeTorque; // 0x11C
        Float32 SlopeGripMinAngle; // 0x120
        Float32 SlopeGripMaxAngle; // 0x124
        Int32 SlopeGripExponent; // 0x128
        Float32 SideSlipAngleMaxSlipCondition; // 0x12C
        Float32 AngularVelocityMinSlipCondition; // 0x130
        Float32 WheelVelocityXMinSlipCondition; // 0x134
        Float32 WheelSlipRatioMaxSlipCondition; // 0x138
        Float32 LongitudinalFrictionForceMaxFactor; // 0x13C
        Float32 LateralFrictionForceMaxFactor; // 0x140
        Float32 LongitudinalSlipFactor; // 0x144
        Float32 LateralSlipFactor; // 0x148
        char pad_0x14C[0x4];
        Array<GameShared::FrictionScaleAtVelocity> LongitudeFrictionScale; // 0x150
        Array<GameShared::FrictionScaleAtVelocity> LattitudeFrictionScale; // 0x158
        Float32 FxTorqueRadiusMultiplier; // 0x160
        Float32 TotalFrictionScale; // 0x164
        Float32 TotalLateralFrictionScale; // 0x168
        Float32 LateralPosK; // 0x16C
        Float32 LateralNegK; // 0x170
        Float32 LongitudinalPosK; // 0x174
        Float32 LongitudinalNegK; // 0x178
        Float32 BrakingLongitudinalMultiplier; // 0x17C
        Float32 BrakingLateralMultiplier; // 0x180
        Float32 WheelFrictionLattitudeBrakeScale; // 0x184
        Boolean HasSteeringInverted; // 0x188
        Boolean UseEngineBrake; // 0x189
        Boolean IsAllowedToSpin; // 0x18A
        Boolean AdjustWheelRotation; // 0x18B
        Boolean AllowGripOnVehicles; // 0x18C
        Boolean ExtendClientRaycastWheel; // 0x18D
        GameShared::CutSceneSettingsWheel CutSceneSettingsWheel; // 0x18E
        char pad_0x18F[0x1];
    }; // 0x190
    static_assert(sizeof(WheelConfigData) == 0x190);
}
#pragma pack(pop)