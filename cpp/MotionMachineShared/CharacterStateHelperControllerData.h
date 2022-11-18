// Object: CharacterStateHelperControllerData
// ClassId: 1341
// RuntimeId: 36041
// TypeInfo: 0x0000000144EF4AA0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../Physics/RigidBodyCollisionLayer.h"
#include "../MotionMachineShared/IntMaskToBoolItem.h"
#include "../MotionMachineShared/VelocityThresholdItem.h"
#include "../MotionMachineShared/FloatChannelThresholdItem.h"
#include "../MotionMachineShared/Vec3ChannelThresholdItem.h"
#include "../MotionMachineShared/Vec3ChannelRangeItem.h"
#include "../MotionMachineShared/WithinAngleArcItem.h"
#include "../MotionMachineShared/PositionWithinAngle.h"
#include "../MotionMachineShared/AngularYawSpeedOutput.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateHelperControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0x50
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0x58
        MotionMachineShared::Vec3ChannelData GroundNormalChannel; // 0x60
        MotionMachineShared::FloatChannelData ForwardGroundAngleChannel; // 0x68
        MotionMachineShared::FloatChannelData RightGroundAngleChannel; // 0x70
        MotionMachineShared::FloatChannelData ForwardSpeedChannel; // 0x78
        MotionMachineShared::FloatChannelData StrafeSpeedChannel; // 0x80
        MotionMachineShared::FloatChannelData SpeedChannel; // 0x88
        MotionMachineShared::TransformChannelData CurrentTransformChannel; // 0x90
        MotionMachineShared::FloatChannelData ThrottleInputChannel; // 0x98
        MotionMachineShared::FloatChannelData StrafeInputChannel; // 0xA0
        MotionMachineShared::BoolChannelData IsMovingChannel; // 0xA8
        MotionMachineShared::FloatChannelData DesiredYawChannel; // 0xB0
        MotionMachineShared::FloatChannelData InputMagnitudeChannel; // 0xB8
        MotionMachineShared::FloatChannelData RelativeMovementDirectionChannel; // 0xC0
        MotionMachineShared::BoolChannelData HasReachedDesiredAngleChannel; // 0xC8
        Float32 DesiredAngleThreshold; // 0xD0
        char pad_0xD4[0x4];
        MotionMachineShared::BoolChannelData HasReachedDesiredBrakeAngleChannel; // 0xD8
        Float32 DesiredBrakeAngleThreshold; // 0xE0
        char pad_0xE4[0x4];
        MotionMachineShared::BoolChannelData IsThrottleOrStrafeInputChannel; // 0xE8
        Float32 OnBackThreshold; // 0xF0
        char pad_0xF4[0x4];
        MotionMachineShared::BoolChannelData OnBackChannel; // 0xF8
        MotionMachineShared::BoolChannelData ForceLegToFacingChannel; // 0x100
        MotionMachineShared::IntChannelData ForceLegDirectionChannel; // 0x108
        MotionMachineShared::FloatChannelData LegWorldYawChannel; // 0x110
        MotionMachineShared::BoolChannelData AllowProneRayCastChannel; // 0x118
        Float32 ProneRaycastOffsetHeight; // 0x120
        Float32 ProneRayCastLength; // 0x124
        Float32 ProneRayCastPushOutLength; // 0x128
        Float32 StandRayCastLength; // 0x12C
        Float32 ProneRayCastAcceleration; // 0x130
        Float32 ProneRayCastHitRejectAngle; // 0x134
        MotionMachineShared::FloatChannelData PushRaycastHitDistanceChannel; // 0x138
        MotionMachineShared::Vec3ChannelData WallPushAccelerationChannel; // 0x140
        Physics::RigidBodyCollisionLayer ProneRaycastCollisionLayer; // 0x148
        char pad_0x14C[0x4];
        MotionMachineShared::IntChannelData CurrentPoseChannel; // 0x150
        MotionMachineShared::IntChannelData ChangingToPoseChannel; // 0x158
        Array<MotionMachineShared::IntMaskToBoolItem> IntMaskToBoolItems; // 0x160
        Array<MotionMachineShared::VelocityThresholdItem> ThresholdItems; // 0x168
        Array<MotionMachineShared::FloatChannelThresholdItem> FloatChannelThresholdItems; // 0x170
        Array<MotionMachineShared::Vec3ChannelThresholdItem> Vec3ChannelThresholdItems; // 0x178
        Array<MotionMachineShared::Vec3ChannelRangeItem> Vec3ChannelRangeItems; // 0x180
        Array<MotionMachineShared::WithinAngleArcItem> WithinAngleArcItems; // 0x188
        Array<MotionMachineShared::PositionWithinAngle> PositionsWithinAngles; // 0x190
        Array<MotionMachineShared::AngularYawSpeedOutput> AngularYawSpeedOutputItems; // 0x198
    }; // 0x1A0
    static_assert(sizeof(CharacterStateHelperControllerData) == 0x1A0);
}
#pragma pack(pop)