// Object: CharacterStateFloatChannelValueData
// ClassId: 1371
// RuntimeId: 54827
// TypeInfo: 0x0000000144DF8940
#include "../DiceShooterShared/CharacterStateChannelValueData.h"
#include "../MotionMachineShared/CharacterStatePublicFloatChannelData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateFloatChannelValueData : public DiceShooterShared::CharacterStateChannelValueData {
        MotionMachineShared::CharacterStatePublicFloatChannelData Channel; // 0x20
        Float32 Value; // 0x28
        Float32 ResetValue; // 0x2C
    }; // 0x30
    static_assert(sizeof(CharacterStateFloatChannelValueData) == 0x30);
}
#pragma pack(pop)