// Object: IntChannelData
// ClassId: 1308
// RuntimeId: 38797
// TypeInfo: 0x0000000144EFB6B0
#include "../MotionMachineShared/ChannelData.h"
#include "../Ant/AntRef.h"
#include "../Global/Int32.h"
#include "../MotionMachineShared/IntNetworkQuantization.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class IntChannelData : public MotionMachineShared::ChannelData {
        Ant::AntRef AntInt; // 0x38
        Int32 DefaultValue; // 0x4C
        MotionMachineShared::IntNetworkQuantization NetworkQuantization; // 0x50
        Int32 LatencyCompensateTagFrames; // 0x5C
    }; // 0x60
    static_assert(sizeof(IntChannelData) == 0x60);
}
#pragma pack(pop)