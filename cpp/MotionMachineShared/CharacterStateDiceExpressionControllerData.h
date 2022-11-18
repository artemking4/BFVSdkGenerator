// Object: CharacterStateDiceExpressionControllerData
// ClassId: 1337
// RuntimeId: 57380
// TypeInfo: 0x0000000144EF4820
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/DiceExpression.h"
#include "../MotionMachineShared/ExpressionFunctionArgumentBinding.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateDiceExpressionControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Ant::AntRef AntController; // 0x38
        char pad_0x4C[0x4];
        MotionMachineShared::DiceExpression Expression; // 0x50
        MotionMachineShared::ExpressionFunctionArgumentBinding InArgs; // 0x58
        MotionMachineShared::ExpressionFunctionArgumentBinding OutArgs; // 0x80
        Int32 TicksToRun; // 0xA8
        char pad_0xAC[0x4];
    }; // 0xB0
    static_assert(sizeof(CharacterStateDiceExpressionControllerData) == 0xB0);
}
#pragma pack(pop)