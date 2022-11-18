// Object: CharacterStatePublicFloatChannelMapping
// ClassId: 1395
// RuntimeId: 51071
// TypeInfo: 0x0000000144EFAFB0
#include "../MotionMachineShared/CharacterStatePublicChannelMapping.h"
#include "../MotionMachineShared/CharacterStatePublicFloatChannelData.h"
#include "../MotionMachineShared/FloatChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePublicFloatChannelMapping : public MotionMachineShared::CharacterStatePublicChannelMapping {
        MotionMachineShared::CharacterStatePublicFloatChannelData PublicChannel; // 0x18
        MotionMachineShared::FloatChannelData Channel; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStatePublicFloatChannelMapping) == 0x28);
}
#pragma pack(pop)