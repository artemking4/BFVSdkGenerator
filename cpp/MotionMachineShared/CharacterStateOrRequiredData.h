// Object: CharacterStateOrRequiredData
// ClassId: 1408
// RuntimeId: 12562
// TypeInfo: 0x0000000144EFABB0
#include "../MotionMachineShared/CharacterStateRequiredChannelValueData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateOrRequiredData : public MotionMachineShared::CharacterStateRequiredChannelValueData {
        Array<MotionMachineShared::CharacterStateRequiredChannelValueData> OrValues; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStateOrRequiredData) == 0x28);
}
#pragma pack(pop)