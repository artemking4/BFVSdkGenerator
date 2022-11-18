// Object: CharacterStateStateFlowNodeControllerData
// ClassId: 1364
// RuntimeId: 33677
// TypeInfo: 0x0000000144EFB9B0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/TransitionCondition.h"
#include "../MotionMachineShared/CharacterStateKeyframedChannelControllerData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateStateFlowNodeControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<MotionMachineShared::TransitionCondition> Transitions; // 0x38
        Array<MotionMachineShared::CharacterStateKeyframedChannelControllerData> ChannelControllers; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterStateStateFlowNodeControllerData) == 0x48);
}
#pragma pack(pop)