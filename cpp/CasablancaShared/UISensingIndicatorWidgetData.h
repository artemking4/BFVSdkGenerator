// Object: UISensingIndicatorWidgetData
// ClassId: 3835
// RuntimeId: 43111
// TypeInfo: 0x0000000144D9BA90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UISensingIndicatorWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 BumpDuration; // 0x80
        Float32 BumpMaxScale; // 0x84
        Float32 BumpExponent; // 0x88
        char pad_0x8C[0x4];
    }; // 0x90
    static_assert(sizeof(UISensingIndicatorWidgetData) == 0x90);
}
#pragma pack(pop)