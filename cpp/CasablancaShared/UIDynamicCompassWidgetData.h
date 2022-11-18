// Object: UIDynamicCompassWidgetData
// ClassId: 3818
// RuntimeId: 20331
// TypeInfo: 0x0000000144D9B910
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/FloatCurveAsset.h"
#include "../CasablancaShared/UICompassProjectionMode.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIDynamicCompassWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Float32 Angle; // 0x80
        char pad_0x84[0x4];
        Core::FloatCurveAsset FadeCurve; // 0x88
        CasablancaShared::UICompassProjectionMode ProjectionMode; // 0x90
        Boolean UseFadeCurve; // 0x94
        char pad_0x95[0xB];
    }; // 0xA0
    static_assert(sizeof(UIDynamicCompassWidgetData) == 0xA0);
}
#pragma pack(pop)