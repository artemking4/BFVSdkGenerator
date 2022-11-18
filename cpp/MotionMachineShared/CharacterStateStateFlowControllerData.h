// Object: CharacterStateStateFlowControllerData
// ClassId: 1363
// RuntimeId: 25908
// TypeInfo: 0x0000000144EFB930
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateStateFlowControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntStateFlowController; // 0x38
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(CharacterStateStateFlowControllerData) == 0x50);
}
#pragma pack(pop)