// Object: ControllerEvalComponentData
// ClassId: 1788
// RuntimeId: 41006
// TypeInfo: 0x0000000144DE8790
#include "../SoldierShared/IExternalCharacterStateControlComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../MotionMachineShared/CharacterStateOwnerData.h"
#include "../DiceShooterShared/InputToGameState.h"
#include "../DiceShooterShared/InputFilterItem.h"
#include "../DiceShooterShared/InputToFloatGameState.h"
#include "../MotionMachineShared/BoolChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"
#include "../DiceShooterShared/CharacterStateRequestListData.h"
#include "../DiceShooterShared/OldPhysicsEmulatorData.h"
#include "../DiceShooterShared/SupportInfo.h"
#include "../DiceShooterShared/CharacterStateAgilityData.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class ControllerEvalComponentData : public SoldierShared::IExternalCharacterStateControlComponentData {
        Core::Realm Realm; // 0x80
        char pad_0x84[0x4];
        MotionMachineShared::CharacterStateOwnerData LocoAnimatable; // 0x88
        Array<DiceShooterShared::InputToGameState> SimpleInput; // 0x90
        Array<DiceShooterShared::InputFilterItem> InputFilter; // 0x98
        Array<DiceShooterShared::InputToFloatGameState> AnalogInput; // 0xA0
        MotionMachineShared::BoolChannelData NewPhysicsActiveChannel; // 0xA8
        MotionMachineShared::BoolChannelData Disable1pEntitySpaceChannel; // 0xB0
        MotionMachineShared::Vec3ChannelData Velocity; // 0xB8
        MotionMachineShared::Vec3ChannelData AngularVelocity; // 0xC0
        MotionMachineShared::FloatChannelData AimYaw; // 0xC8
        MotionMachineShared::FloatChannelData AimPitch; // 0xD0
        MotionMachineShared::FloatChannelData InVehicleAimYaw; // 0xD8
        MotionMachineShared::FloatChannelData InVehicleAimPitch; // 0xE0
        MotionMachineShared::TransformChannelData Position; // 0xE8
        Array<MotionMachineShared::Vec3ChannelData> Accelerations; // 0xF0
        Array<MotionMachineShared::Vec3ChannelData> AngularAccelerations; // 0xF8
        MotionMachineShared::Vec3ChannelData ExternalAcceleration; // 0x100
        MotionMachineShared::FloatChannelData WeaponMoveSpeedMultiplier; // 0x108
        MotionMachineShared::Vec3ChannelData AuthoritativeVelocity; // 0x110
        MotionMachineShared::BoolChannelData UseAuthoritativeMotion; // 0x118
        MotionMachineShared::IntChannelData DesiredPhysicsPoseChannel; // 0x120
        MotionMachineShared::IntChannelData DesiredPoseChannel; // 0x128
        MotionMachineShared::IntChannelData ChangingToPoseChannel; // 0x130
        MotionMachineShared::IntChannelData CurrentPoseChannel; // 0x138
        MotionMachineShared::IntChannelData WeaponTypeChannel; // 0x140
        MotionMachineShared::IntChannelData CollisionModeOverrideChannel; // 0x148
        DiceShooterShared::CharacterStateRequestListData CharacterRequestList; // 0x150
        Array<DiceShooterShared::CharacterStateRequestListData> CharacterRequestLists; // 0x158
        MotionMachineShared::IntChannelData ActionStateChannel; // 0x160
        MotionMachineShared::BoolChannelData ForceReplicatedPoseChannel; // 0x168
        MotionMachineShared::BoolChannelData ReplicatedUpdateDisabled; // 0x170
        DiceShooterShared::OldPhysicsEmulatorData OldPhysicsEmulator; // 0x178
        DiceShooterShared::SupportInfo SupportInfo; // 0x1C8
        DiceShooterShared::CharacterStateAgilityData AgilityData; // 0x1E8
        Boolean UseGameDefinedStateMachine; // 0x1F0
        Boolean PushSupportInfoToPhysics; // 0x1F1
        char pad_0x1F2[0xE];
    }; // 0x200
    static_assert(sizeof(ControllerEvalComponentData) == 0x200);
}
#pragma pack(pop)