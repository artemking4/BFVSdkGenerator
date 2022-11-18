// Object: Vec3ChannelData
// ClassId: 1310
// RuntimeId: 62476
// TypeInfo: 0x0000000144EFB5B0
#include "../MotionMachineShared/ChannelData.h"
#include "../Ant/AntRef.h"
#include "../MotionMachineShared/Vec3NetworkQuantization.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace MotionMachineShared {
    class Vec3ChannelData : public MotionMachineShared::ChannelData {
        Ant::AntRef AntVec; // 0x38
        char pad_0x4C[0x4];
        Core::Vec3 DefaultValue; // 0x50
        MotionMachineShared::Vec3NetworkQuantization NetworkQuantization; // 0x60
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(Vec3ChannelData) == 0xA0);
}
#pragma pack(pop)