// Object: MotionDampingData
// ClassId: 4311
// RuntimeId: 55805
// TypeInfo: 0x0000000144E9B390
#include "../Core/DataContainer.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace GameShared {
    class MotionDampingData : public Core::DataContainer {
        Float32 Pitch; // 0x18
        Float32 Yaw; // 0x1C
        Core::Vec3 LinearModifier; // 0x20
        Float32 Roll; // 0x30
        Float32 Linear; // 0x34
        char pad_0x38[0x8];
    }; // 0x40
    static_assert(sizeof(MotionDampingData) == 0x40);
}
#pragma pack(pop)