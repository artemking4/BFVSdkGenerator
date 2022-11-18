// Object: CharacterStatePhaseControllerData
// ClassId: 1357
// RuntimeId: 31551
// TypeInfo: 0x0000000144EF49A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePhaseControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::FloatChannelData PhaseChannel; // 0x50
        MotionMachineShared::FloatChannelData TimeChannel; // 0x58
        MotionMachineShared::FloatChannelData PhaseCalculationChannel; // 0x60
        Float32 PhaseCalculationMinBound; // 0x68
        Float32 PhaseCalculationMaxBound; // 0x6C
    }; // 0x70
    static_assert(sizeof(CharacterStatePhaseControllerData) == 0x70);
}
#pragma pack(pop)