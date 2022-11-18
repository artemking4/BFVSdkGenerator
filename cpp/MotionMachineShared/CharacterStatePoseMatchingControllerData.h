// Object: CharacterStatePoseMatchingControllerData
// ClassId: 1359
// RuntimeId: 30119
// TypeInfo: 0x0000000144EF3420
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/ChannelSetData.h"
#include "../MotionMachineShared/TransformChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../MotionMachineShared/ExtractedClipInfo.h"
#include "../Core/Vec3.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class CharacterStatePoseMatchingControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::ChannelSetData IncludedChannels; // 0x38
        MotionMachineShared::TransformChannelData ConnectTransformChannel; // 0x40
        char pad_0x48[0x8];
        Core::Vec3 MatchPositionWeight; // 0x50
        Core::Vec3 MatchRotationWeight; // 0x60
        Core::Vec3 MatchVelocityWeight; // 0x70
        Core::Vec3 MatchAngularVelocityWeight; // 0x80
        Core::Vec3 MatchExtraChannelTranslationWeight; // 0x90
        MotionMachineShared::TransformChannelData TargetConnectTransformChannel; // 0xA0
        MotionMachineShared::TransformChannelData PosAndRotChannel; // 0xA8
        MotionMachineShared::Vec3ChannelData VelocityChannel; // 0xB0
        MotionMachineShared::Vec3ChannelData AngularVelocityChannel; // 0xB8
        MotionMachineShared::TransformChannelData ClipTrajectoryChannel; // 0xC0
        Array<MotionMachineShared::TransformChannelData> ExtraChannels; // 0xC8
        Array<MotionMachineShared::ExtractedClipInfo> ChildControllerExtractedInfo; // 0xD0
        Ant::AntRef AntController; // 0xD8
        char pad_0xEC[0x4];
    }; // 0xF0
    static_assert(sizeof(CharacterStatePoseMatchingControllerData) == 0xF0);
}
#pragma pack(pop)