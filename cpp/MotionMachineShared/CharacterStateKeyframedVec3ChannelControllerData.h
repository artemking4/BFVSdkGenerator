// Object: CharacterStateKeyframedVec3ChannelControllerData
// ClassId: 1350
// RuntimeId: 14681
// TypeInfo: 0x0000000144EF4220
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/CharacterStateVec3TrackData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateKeyframedVec3ChannelControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        Array<MotionMachineShared::CharacterStateVec3TrackData> Tracks; // 0x38
        Array<MotionMachineShared::Vec3ChannelData> Channels; // 0x40
    }; // 0x48
    static_assert(sizeof(CharacterStateKeyframedVec3ChannelControllerData) == 0x48);
}
#pragma pack(pop)