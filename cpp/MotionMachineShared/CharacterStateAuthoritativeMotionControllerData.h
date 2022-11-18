// Object: CharacterStateAuthoritativeMotionControllerData
// ClassId: 1326
// RuntimeId: 18390
// TypeInfo: 0x0000000144EF4020
#include "../MotionMachineShared/CharacterStateBaseControllerData.h"
#include "../MotionMachineShared/Vec3ChannelData.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class CharacterStateAuthoritativeMotionControllerData : public MotionMachineShared::CharacterStateBaseControllerData {
        MotionMachineShared::Vec3ChannelData AuthoritativeVelocity; // 0x38
        MotionMachineShared::Vec3ChannelData CurrentVelocity; // 0x40
        Ant::AntRef AntController; // 0x48
        char pad_0x5C[0x4];
    }; // 0x60
    static_assert(sizeof(CharacterStateAuthoritativeMotionControllerData) == 0x60);
}
#pragma pack(pop)