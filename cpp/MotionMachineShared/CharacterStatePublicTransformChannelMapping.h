// Object: CharacterStatePublicTransformChannelMapping
// ClassId: 1397
// RuntimeId: 23432
// TypeInfo: 0x0000000144EFB030
#include "../MotionMachineShared/CharacterStatePublicChannelMapping.h"
#include "../MotionMachineShared/CharacterStatePublicTransformChannelData.h"
#include "../MotionMachineShared/TransformChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStatePublicTransformChannelMapping : public MotionMachineShared::CharacterStatePublicChannelMapping {
        MotionMachineShared::CharacterStatePublicTransformChannelData PublicChannel; // 0x18
        MotionMachineShared::TransformChannelData Channel; // 0x20
    }; // 0x28
    static_assert(sizeof(CharacterStatePublicTransformChannelMapping) == 0x28);
}
#pragma pack(pop)