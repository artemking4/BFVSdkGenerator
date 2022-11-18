// Object: FloatInterpolatorEntityData
// ClassId: 3065
// RuntimeId: 59167
// TypeInfo: 0x0000000144F6E240
#include "../UIIncubatorShared/PropertyInterpolatorEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class FloatInterpolatorEntityData : public UIIncubatorShared::PropertyInterpolatorEntityData {
        Float32 In; // 0x38
        Float32 DefaultValue; // 0x3C
        Float32 Velocity; // 0x40
        Boolean UseVelocity; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(FloatInterpolatorEntityData) == 0x48);
}
#pragma pack(pop)