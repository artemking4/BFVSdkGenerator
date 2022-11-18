// Object: BoolChannelData
// ClassId: 1306
// RuntimeId: 17075
// TypeInfo: 0x0000000144EFB730
#include "../MotionMachineShared/ChannelData.h"
#include "../Ant/AntRef.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class BoolChannelData : public MotionMachineShared::ChannelData {
        Ant::AntRef AntBool; // 0x38
        Int32 LatencyCompensateTagFrames; // 0x4C
        Boolean DefaultValue; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(BoolChannelData) == 0x58);
}
#pragma pack(pop)