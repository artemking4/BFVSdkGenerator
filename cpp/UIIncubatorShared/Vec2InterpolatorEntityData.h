// Object: Vec2InterpolatorEntityData
// ClassId: 3067
// RuntimeId: 54635
// TypeInfo: 0x0000000144F6E140
#include "../UIIncubatorShared/PropertyInterpolatorEntityData.h"
#include "../Core/Vec2.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class Vec2InterpolatorEntityData : public UIIncubatorShared::PropertyInterpolatorEntityData {
        Core::Vec2 In; // 0x38
        Core::Vec2 DefaultValue; // 0x40
        Float32 Velocity; // 0x48
        Boolean UseVelocity; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(Vec2InterpolatorEntityData) == 0x50);
}
#pragma pack(pop)