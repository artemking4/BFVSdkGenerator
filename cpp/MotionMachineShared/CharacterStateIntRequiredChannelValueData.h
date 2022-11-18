// Object: CharacterStateIntRequiredChannelValueData
// ClassId: 1407
// RuntimeId: 61739
// TypeInfo: 0x0000000144EFACB0
#include "../MotionMachineShared/CharacterStateRequiredChannelValueData.h"
#include "../MotionMachineShared/CharacterStatePublicIntChannelData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateIntRequiredChannelValueData : public MotionMachineShared::CharacterStateRequiredChannelValueData {
        MotionMachineShared::CharacterStatePublicIntChannelData Channel; // 0x20
        Array<Int32> AllowedValues; // 0x28
    }; // 0x30
    static_assert(sizeof(CharacterStateIntRequiredChannelValueData) == 0x30);
}
#pragma pack(pop)