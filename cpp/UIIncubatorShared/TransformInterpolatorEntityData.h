// Object: TransformInterpolatorEntityData
// ClassId: 3066
// RuntimeId: 8714
// TypeInfo: 0x0000000144F6DFC0
#include "../UIIncubatorShared/PropertyInterpolatorEntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace UIIncubatorShared {
    class TransformInterpolatorEntityData : public UIIncubatorShared::PropertyInterpolatorEntityData {
        char pad_0x38[0x8];
        Core::LinearTransform In; // 0x40
        Core::LinearTransform DefaultValue; // 0x80
    }; // 0xC0
    static_assert(sizeof(TransformInterpolatorEntityData) == 0xC0);
}
#pragma pack(pop)