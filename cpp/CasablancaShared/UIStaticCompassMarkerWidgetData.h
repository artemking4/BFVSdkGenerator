// Object: UIStaticCompassMarkerWidgetData
// ClassId: 3842
// RuntimeId: 17364
// TypeInfo: 0x0000000144D9B790
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"
#include "../Core/FloatCurveAsset.h"
#include "../CasablancaShared/UICompassProjectionMode.h"
#include "../CasablancaShared/UICompassTickAppearanceInfo.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/UICompassTickInfo.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIStaticCompassMarkerWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::Vec3 TickColor; // 0x80
        Float32 TickAlpha; // 0x90
        char pad_0x94[0x4];
        Core::FloatCurveAsset FadeCurve; // 0x98
        Float32 YAnchor; // 0xA0
        CasablancaShared::UICompassProjectionMode ProjectionMode; // 0xA4
        CasablancaShared::UICompassTickAppearanceInfo TickAppearance; // 0xA8
        Int32 NAutoTicks; // 0xB0
        char pad_0xB4[0x4];
        Array<CasablancaShared::UICompassTickInfo> CustomTicks; // 0xB8
        Boolean UseFadeCurve; // 0xC0
        Boolean OverrideBlendMode; // 0xC1
        Boolean UseGlobalAppearance; // 0xC2
        char pad_0xC3[0xD];
    }; // 0xD0
    static_assert(sizeof(UIStaticCompassMarkerWidgetData) == 0xD0);
}
#pragma pack(pop)