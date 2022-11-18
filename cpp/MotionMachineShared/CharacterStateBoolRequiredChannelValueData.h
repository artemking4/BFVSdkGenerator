// Object: CharacterStateBoolRequiredChannelValueData
// ClassId: 1405
// RuntimeId: 51596
// TypeInfo: 0x0000000144EFAD30
#include "../MotionMachineShared/CharacterStateRequiredChannelValueData.h"
#include "../MotionMachineShared/CharacterStatePublicBoolChannelData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateBoolRequiredChannelValueData : public MotionMachineShared::CharacterStateRequiredChannelValueData {
        MotionMachineShared::CharacterStatePublicBoolChannelData Channel; // 0x20
        Array<Boolean> AllowedValues; // 0x28
    }; // 0x30
    static_assert(sizeof(CharacterStateBoolRequiredChannelValueData) == 0x30);
}
#pragma pack(pop)