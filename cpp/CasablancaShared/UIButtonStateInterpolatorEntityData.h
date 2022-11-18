// Object: UIButtonStateInterpolatorEntityData
// ClassId: 3609
// RuntimeId: 34686
// TypeInfo: 0x0000000144D22270
#include "../Entity/EntityData.h"
#include "../CasablancaShared/UIButtonStateSet.h"
#include "../UIIncubatorShared/PropertyInterpolationMode.h"
#include "../UIIncubatorShared/PropertyInterpolationType.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIButtonStateInterpolatorEntityData : public Entity::EntityData {
        Array<CasablancaShared::UIButtonStateSet> Setups; // 0x20
        UIIncubatorShared::PropertyInterpolationMode InterpolationMode; // 0x28
        UIIncubatorShared::PropertyInterpolationType InterpolationType; // 0x2C
        Float32 Duration; // 0x30
        Boolean Enabled; // 0x34
        Boolean MouseOver; // 0x35
        Boolean MouseDown; // 0x36
        Boolean Selected; // 0x37
    }; // 0x38
    static_assert(sizeof(UIButtonStateInterpolatorEntityData) == 0x38);
}
#pragma pack(pop)