// Object: CharacterStateCheckSupportControllerData
// ClassId: 1331
// RuntimeId: 59905
// TypeInfo: 0x0000000144EF3F20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Int32.h"
#include "../Physics/RigidBodyCollisionLayer.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class CharacterStateCheckSupportControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::IntChannelData CurrentMotionState; // 0x38
        Float32 ClosestPointCheckRadius; // 0x40
        char pad_0x44[0xC];
        Core::Vec3 ClosestPointCheckOffset; // 0x50
        Float32 ClosestPointMaxXZVelocity; // 0x60
        Int32 OnGroundActionStateIndex; // 0x64
        Int32 SlidingActionStateIndex; // 0x68
        Float32 StepHeightValue; // 0x6C
        Float32 MovingStepHeightValue; // 0x70
        Float32 CloseToGroundThreshold; // 0x74
        Float32 FarFromGroundThreshold; // 0x78
        Float32 EnterSwimStateDepth; // 0x7C
        Float32 ExitSwimStateDepth; // 0x80
        Physics::RigidBodyCollisionLayer CheckSupportRaycastCollisionLayer; // 0x84
        Int32 CheckSupportRaycastCountMoving; // 0x88
        Float32 CheckSupportLookaheadDistance; // 0x8C
        Float32 RayStartHeightOnGround; // 0x90
        Float32 RayEndHeightOnGround; // 0x94
        Float32 TriangleRayStartHeight; // 0x98
        Float32 TriangleRayEndHeight; // 0x9C
        Float32 RayStartHeightInAir; // 0xA0
        Float32 RayEndHeightInAir; // 0xA4
        Float32 SpeedForMovingRayCasts; // 0xA8
        Float32 PhysicalRadius; // 0xAC
        Float32 SlideAngle; // 0xB0
        char pad_0xB4[0x4];
        Array<MotionMachineShared::BoolChannelData> EnabledChannels; // 0xB8
        MotionMachineShared::BoolChannelData IsSupportedChannel; // 0xC0
        MotionMachineShared::BoolChannelData InWaterChannel; // 0xC8
        MotionMachineShared::FloatChannelData DistanceToWaterSurfaceChannel; // 0xD0
        MotionMachineShared::FloatChannelData WaterSurfaceSpeedChannel; // 0xD8
        MotionMachineShared::BoolChannelData IsSlidingChannel; // 0xE0
        MotionMachineShared::BoolChannelData IsCloseToGround; // 0xE8
        MotionMachineShared::BoolChannelData IsFarFromGround; // 0xF0
        MotionMachineShared::BoolChannelData SupportedNextFrameChannel; // 0xF8
        MotionMachineShared::FloatChannelData DistanceFromGroundChannel; // 0x100
        MotionMachineShared::Vec3ChannelData NormalChannel; // 0x108
        MotionMachineShared::Vec3ChannelData GroundVelocityChannel; // 0x110
        MotionMachineShared::FloatChannelData StepHeight; // 0x118
        MotionMachineShared::TransformChannelData Position; // 0x120
        MotionMachineShared::Vec3ChannelData CurrentVelocity; // 0x128
        MotionMachineShared::FloatChannelData ThrottleInput; // 0x130
        MotionMachineShared::FloatChannelData StrafeInput; // 0x138
        MotionMachineShared::IntChannelData GroundMaterialChannel; // 0x140
        MotionMachineShared::FloatChannelData GroundSoundMaterialId; // 0x148
        Ant::AntRef AntController; // 0x150
        Boolean EnableClosestPointCheck; // 0x164
        Boolean EnableHeightDiffProjectionInOnGroundState; // 0x165
        Boolean EnableHeightDiffProjectionInSlidingState; // 0x166
        Boolean EnableHeightDiffProjectionInOtherStates; // 0x167
        Boolean RejectCharacters; // 0x168
        char pad_0x169[0x7];
    }; // 0x170
    static_assert(sizeof(CharacterStateCheckSupportControllerData) == 0x170);
}
#pragma pack(pop)