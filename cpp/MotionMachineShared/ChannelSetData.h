// Object: ChannelSetData
// ClassId: 1311
// RuntimeId: 10980
// TypeInfo: 0x0000000144EFB4B0
#include "../Core/DataContainer.h"
#include "../MotionMachineShared/TransformChannelData.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class ChannelSetData : public Core::DataContainer {
        Array<MotionMachineShared::TransformChannelData> Channel; // 0x18
    }; // 0x20
    static_assert(sizeof(ChannelSetData) == 0x20);
}
#pragma pack(pop)