// Object: UIWorldIconOneDimensionalProjectionWidgetData
// ClassId: 3848
// RuntimeId: 44600
// TypeInfo: 0x0000000144D40FD0
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"
#include "../CasablancaShared/UICompassProjectionMode.h"
#include "../CasablancaShared/UIWorldIconProjectionDirection.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIWorldIconOneDimensionalProjectionWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::LinearTransform TransformOverride; // 0x80
        Core::Vec2 LayoutMidPoint; // 0xC0
        Float32 CompassWidth; // 0xC8
        Float32 StickyBorderWidth; // 0xCC
        Float32 StickyBorderEdgeAngle; // 0xD0
        Float32 StickyBorderSlope; // 0xD4
        Float32 TransformMix; // 0xD8
        Core::Vec2 HudMidPointOffset; // 0xDC
        CasablancaShared::UICompassProjectionMode ProjectionMode; // 0xE4
        CasablancaShared::UIWorldIconProjectionDirection Direction; // 0xE8
        Boolean TransformOverrideEnabled; // 0xEC
        char pad_0xED[0x3];
    }; // 0xF0
    static_assert(sizeof(UIWorldIconOneDimensionalProjectionWidgetData) == 0xF0);
}
#pragma pack(pop)