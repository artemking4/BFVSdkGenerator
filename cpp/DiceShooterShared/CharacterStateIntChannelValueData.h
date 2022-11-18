// Object: CharacterStateIntChannelValueData
// ClassId: 1372
// RuntimeId: 37226
// TypeInfo: 0x0000000144DF89C0
#include "../DiceShooterShared/CharacterStateChannelValueData.h"
#include "../MotionMachineShared/CharacterStatePublicIntChannelData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateIntChannelValueData : public DiceShooterShared::CharacterStateChannelValueData {
        MotionMachineShared::CharacterStatePublicIntChannelData Channel; // 0x20
        Int32 Value; // 0x28
        Int32 ResetValue; // 0x2C
    }; // 0x30
    static_assert(sizeof(CharacterStateIntChannelValueData) == 0x30);
}
#pragma pack(pop)