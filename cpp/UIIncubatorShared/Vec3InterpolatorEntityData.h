// Object: Vec3InterpolatorEntityData
// ClassId: 3068
// RuntimeId: 60125
// TypeInfo: 0x0000000144F6E0C0
#include "../UIIncubatorShared/PropertyInterpolatorEntityData.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace UIIncubatorShared {
    class Vec3InterpolatorEntityData : public UIIncubatorShared::PropertyInterpolatorEntityData {
        char pad_0x38[0x8];
        Core::Vec3 In; // 0x40
        Core::Vec3 DefaultValue; // 0x50
        Float32 Velocity; // 0x60
        Boolean UseVelocity; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(Vec3InterpolatorEntityData) == 0x70);
}
#pragma pack(pop)