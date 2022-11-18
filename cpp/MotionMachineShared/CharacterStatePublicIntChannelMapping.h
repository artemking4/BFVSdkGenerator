// Object: CharacterStatePublicIntChannelMapping
// ClassId: 1396
// RuntimeId: 7150
// TypeInfo: 0x0000000144EFAF30
#include "../MotionMachineShared/CharacterStatePublicChannelMapping.h"
#include "../MotionMachineShared/CharacterStatePublicIntChannelData.h"
#include "../MotionMachineShared/IntChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePublicIntChannelMapping : public MotionMachineShared::CharacterStatePublicChannelMapping {
        MotionMachineShared::CharacterStatePublicIntChannelData PublicChannel; // 0x18
        MotionMachineShared::IntChannelData Channel; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStatePublicIntChannelMapping) == 0x28);
}
#pragma pack(pop)