// Object: CharacterStateKeyframedTransformChannelControllerData
// ClassId: 1349
// RuntimeId: 25850
// TypeInfo: 0x0000000144EF42A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/CharacterStateTransformTrackData.h"
#include "../MotionMachineShared/TransformChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateKeyframedTransformChannelControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<MotionMachineShared::CharacterStateTransformTrackData> Tracks; // 0x38
        Array<MotionMachineShared::TransformChannelData> Channels; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterStateKeyframedTransformChannelControllerData) == 0x48);
}
#pragma pack(pop)