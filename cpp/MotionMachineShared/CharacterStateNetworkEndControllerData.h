// Object: CharacterStateNetworkEndControllerData
// ClassId: 1354
// RuntimeId: 18465
// TypeInfo: 0x0000000144EF40A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateNetworkEndControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Uint32 Length; // 0x38
        Ant::AntRef AntController; // 0x3C
        Boolean WrapPhase; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(CharacterStateNetworkEndControllerData) == 0x58);
}
#pragma pack(pop)