// Object: FloatChannelData
// ClassId: 1307
// RuntimeId: 19394
// TypeInfo: 0x0000000144EFB630
#include "../MotionMachineShared/ChannelData.h"
#include "../Ant/AntRef.h"
#include "../Global/Float32.h"
#include "../MotionMachineShared/FloatNetworkQuantization.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class FloatChannelData : public MotionMachineShared::ChannelData {
        Ant::AntRef AntFloat; // 0x38
        Float32 DefaultValue; // 0x4C
        MotionMachineShared::FloatNetworkQuantization NetworkQuantization; // 0x50
        Boolean IsDeltaChannel; // 0x64
        Boolean AccumulateDelta; // 0x65
        Boolean TreatAsGameLogic; // 0x66
        char pad_0x67[0x1];
    }; // 0x68
    static_assert(sizeof(FloatChannelData) == 0x68);
}
#pragma pack(pop)