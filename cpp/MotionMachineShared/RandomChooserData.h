// Object: RandomChooserData
// ClassId: 4556
// RuntimeId: 23964
// TypeInfo: 0x0000000144EF4620
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace MotionMachineShared {
    class RandomChooserData : public Core::DataContainer {
        Array<Float32> Limits; // 0x18
    }; // 0x20
    static_assert(sizeof(RandomChooserData) == 0x20);
}
#pragma pack(pop)