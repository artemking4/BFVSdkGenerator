// Object: CharacterStatePublicVec3ChannelMapping
// ClassId: 1398
// RuntimeId: 50
// TypeInfo: 0x0000000144EFAE30
#include "../MotionMachineShared/CharacterStatePublicChannelMapping.h"
#include "../MotionMachineShared/CharacterStatePublicVec3ChannelData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePublicVec3ChannelMapping : public MotionMachineShared::CharacterStatePublicChannelMapping {
        MotionMachineShared::CharacterStatePublicVec3ChannelData PublicChannel; // 0x18
        MotionMachineShared::Vec3ChannelData Channel; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStatePublicVec3ChannelMapping) == 0x28);
}
#pragma pack(pop)