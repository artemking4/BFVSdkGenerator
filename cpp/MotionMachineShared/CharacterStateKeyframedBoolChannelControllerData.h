// Object: CharacterStateKeyframedBoolChannelControllerData
// ClassId: 1345
// RuntimeId: 63148
// TypeInfo: 0x0000000144EF44A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/CharacterStateBoolTrackData.h"
#include "../MotionMachineShared/BoolChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateKeyframedBoolChannelControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<MotionMachineShared::CharacterStateBoolTrackData> Tracks; // 0x38
        Array<MotionMachineShared::BoolChannelData> Channels; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterStateKeyframedBoolChannelControllerData) == 0x48);
}
#pragma pack(pop)