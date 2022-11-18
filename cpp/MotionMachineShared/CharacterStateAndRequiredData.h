// Object: CharacterStateAndRequiredData
// ClassId: 1404
// RuntimeId: 2033
// TypeInfo: 0x0000000144EFAB30
#include "../MotionMachineShared/CharacterStateRequiredChannelValueData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateAndRequiredData : public MotionMachineShared::CharacterStateRequiredChannelValueData {
        Array<MotionMachineShared::CharacterStateRequiredChannelValueData> AndValues; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStateAndRequiredData) == 0x28);
}
#pragma pack(pop)