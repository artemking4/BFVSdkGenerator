// Object: CharacterStateKeyframedChannelControllerData
// ClassId: 1346
// RuntimeId: 48437
// TypeInfo: 0x0000000144EF43A0
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/CharacterStateKeyframedBoolChannelControllerData.h"
#include "../MotionMachineShared/CharacterStateKeyframedIntChannelControllerData.h"
#include "../MotionMachineShared/CharacterStateKeyframedFloatChannelControllerData.h"
#include "../MotionMachineShared/CharacterStateKeyframedVec3ChannelControllerData.h"
#include "../MotionMachineShared/AnimationOnlyTagCollection.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateKeyframedChannelControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::CharacterStateKeyframedBoolChannelControllerData BoolChannelController; // 0x38
        MotionMachineShared::CharacterStateKeyframedIntChannelControllerData IntChannelController; // 0x40
        MotionMachineShared::CharacterStateKeyframedFloatChannelControllerData FloatChannelController; // 0x48
        MotionMachineShared::CharacterStateKeyframedVec3ChannelControllerData Vec3ChannelController; // 0x50
        Array<MotionMachineShared::AnimationOnlyTagCollection> AnimationOnlyTags; // 0x58
    }; // 0x60
    static_assert(sizeof(CharacterStateKeyframedChannelControllerData) == 0x60);
}
#pragma pack(pop)