// Object: CharacterStateKeyframedFloatChannelControllerData
// ClassId: 1347
// RuntimeId: 57412
// TypeInfo: 0x0000000144EF4320
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/CharacterStateFloatTrackData.h"
#include "../MotionMachineShared/FloatChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateKeyframedFloatChannelControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<MotionMachineShared::CharacterStateFloatTrackData> Tracks; // 0x38
        Array<MotionMachineShared::FloatChannelData> Channels; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterStateKeyframedFloatChannelControllerData) == 0x48);
}
#pragma pack(pop)