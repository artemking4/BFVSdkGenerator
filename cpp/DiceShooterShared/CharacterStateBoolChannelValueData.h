// Object: CharacterStateBoolChannelValueData
// ClassId: 1370
// RuntimeId: 12412
// TypeInfo: 0x0000000144DF8A40
#include "../DiceShooterShared/CharacterStateChannelValueData.h"
#include "../MotionMachineShared/CharacterStatePublicBoolChannelData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CharacterStateBoolChannelValueData : public DiceShooterShared::CharacterStateChannelValueData {
        MotionMachineShared::CharacterStatePublicBoolChannelData Channel; // 0x20
        Boolean Value; // 0x28
        Boolean ResetValue; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(CharacterStateBoolChannelValueData) == 0x30);
}
#pragma pack(pop)