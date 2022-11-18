// Object: CharacterStateKeyframedIntChannelControllerData
// ClassId: 1348
// RuntimeId: 43012
// TypeInfo: 0x0000000144EF4420
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/CharacterStateIntTrackData.h"
#include "../MotionMachineShared/IntChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateKeyframedIntChannelControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<MotionMachineShared::CharacterStateIntTrackData> Tracks; // 0x38
        Array<MotionMachineShared::IntChannelData> Channels; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterStateKeyframedIntChannelControllerData) == 0x48);
}
#pragma pack(pop)