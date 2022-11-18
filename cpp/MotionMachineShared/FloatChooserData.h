// Object: FloatChooserData
// ClassId: 1628
// RuntimeId: 56556
// TypeInfo: 0x0000000144EF45A0
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/FloatChannelData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class FloatChooserData : public Core::DataContainer {
        MotionMachineShared::FloatChannelData InputChannel; // 0x18
        Array<Float32> Thresholds; // 0x20
    }; // 0x28
    static_assert(sizeof(FloatChooserData) == 0x28);
}
#pragma pack(pop)