// Object: CharacterStateVec3ChannelValueData
// ClassId: 1373
// RuntimeId: 51990
// TypeInfo: 0x0000000144DF88C0
#include "../DiceShooterShared/CharacterStateChannelValueData.h"
#include "../MotionMachineShared/CharacterStatePublicVec3ChannelData.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace DiceShooterShared {
    class CharacterStateVec3ChannelValueData : public DiceShooterShared::CharacterStateChannelValueData {
        MotionMachineShared::CharacterStatePublicVec3ChannelData Channel; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 Value; // 0x30
        Core::Vec3 ResetValue; // 0x40
    }; // 0x50
    static_assert(sizeof(CharacterStateVec3ChannelValueData) == 0x50);
}
#pragma pack(pop)