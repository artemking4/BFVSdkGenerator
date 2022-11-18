// Object: CharacterStateFloatRequiredChannelValueData
// ClassId: 1406
// RuntimeId: 42081
// TypeInfo: 0x0000000144EFAC30
#include "../MotionMachineShared/CharacterStateRequiredChannelValueData.h"
#include "../MotionMachineShared/CharacterStatePublicFloatChannelData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateFloatRequiredChannelValueData : public MotionMachineShared::CharacterStateRequiredChannelValueData {
        MotionMachineShared::CharacterStatePublicFloatChannelData Channel; // 0x20
        Array<Float32> AllowedValues; // 0x28
    }; // 0x30
    static_assert(sizeof(CharacterStateFloatRequiredChannelValueData) == 0x30);
}
#pragma pack(pop)