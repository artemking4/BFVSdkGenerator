// Object: CharacterStateClipControllerData
// ClassId: 1333
// RuntimeId: 38793
// TypeInfo: 0x0000000144EF4A20
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/ChannelSetData.h"
#include "../MotionMachineShared/CharacterStateKeyframedChannelControllerData.h"
#include "../MotionMachineShared/CharacterStateKeyframedTransformChannelControllerData.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/CharacterStateClipInfo.h"
#include "../MotionMachineShared/ClipOverrideMapping.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateClipControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::ChannelSetData IncludedChannels; // 0x38
        MotionMachineShared::CharacterStateKeyframedChannelControllerData ChannelController; // 0x40
        MotionMachineShared::CharacterStateKeyframedTransformChannelControllerData TransformChannelController; // 0x48
        Uint32 Length; // 0x50
        Uint32 ClipOffset; // 0x54
        Ant::AntRef Controller; // 0x58
        char pad_0x6C[0x4];
        Array<MotionMachineShared::CharacterStateClipInfo> ClipInfos; // 0x70
        Array<MotionMachineShared::ClipOverrideMapping> OverrideSubjects; // 0x78
        Boolean Looping; // 0x80
        char pad_0x81[0x7];
    }; // 0x88
    static_assert(sizeof(CharacterStateClipControllerData) == 0x88);
}
#pragma pack(pop)