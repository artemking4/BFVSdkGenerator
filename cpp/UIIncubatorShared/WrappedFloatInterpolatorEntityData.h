// Object: WrappedFloatInterpolatorEntityData
// ClassId: 3070
// RuntimeId: 40251
// TypeInfo: 0x0000000144F6E1C0
#include "../UIIncubatorShared/PropertyInterpolatorEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace UIIncubatorShared {
    class WrappedFloatInterpolatorEntityData : public UIIncubatorShared::PropertyInterpolatorEntityData {
        Float32 In; // 0x38
        Float32 DefaultValue; // 0x3C
        Float32 Velocity; // 0x40
        Float32 WrappingValueMin; // 0x44
        Float32 WrappingValueMax; // 0x48
        Boolean UseVelocity; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(WrappedFloatInterpolatorEntityData) == 0x50);
}
#pragma pack(pop)