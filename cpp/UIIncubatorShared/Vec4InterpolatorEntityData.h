// Object: Vec4InterpolatorEntityData
// ClassId: 3069
// RuntimeId: 46670
// TypeInfo: 0x0000000144F6E040
#include "../UIIncubatorShared/PropertyInterpolatorEntityData.h"
#include "../Core/Vec4.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace UIIncubatorShared {
    class Vec4InterpolatorEntityData : public UIIncubatorShared::PropertyInterpolatorEntityData {
        char pad_0x38[0x8];
        Core::Vec4 In; // 0x40
        Core::Vec4 DefaultValue; // 0x50
        Float32 Velocity; // 0x60
        Boolean UseVelocity; // 0x64
        char pad_0x65[0xB];
    }; // 0x70
    static_assert(sizeof(Vec4InterpolatorEntityData) == 0x70);
}
#pragma pack(pop)