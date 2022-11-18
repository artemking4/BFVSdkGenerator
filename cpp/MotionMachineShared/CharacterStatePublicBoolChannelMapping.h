// Object: CharacterStatePublicBoolChannelMapping
// ClassId: 1394
// RuntimeId: 1970
// TypeInfo: 0x0000000144EFAEB0
#include "../MotionMachineShared/CharacterStatePublicChannelMapping.h"
#include "../MotionMachineShared/CharacterStatePublicBoolChannelData.h"
#include "../MotionMachineShared/BoolChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePublicBoolChannelMapping : public MotionMachineShared::CharacterStatePublicChannelMapping {
        MotionMachineShared::CharacterStatePublicBoolChannelData PublicChannel; // 0x18
        MotionMachineShared::BoolChannelData Channel; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStatePublicBoolChannelMapping) == 0x28);
}
#pragma pack(pop)