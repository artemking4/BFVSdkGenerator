// Object: BFUIRadialSelectWidgetData
// ClassId: 3804
// RuntimeId: 63499
// TypeInfo: 0x0000000144D96B90
#include "../CasablancaShared/BFUINavigationWidgetData.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIRadialSelectWidgetData : public CasablancaShared::BFUINavigationWidgetData {
        Core::Vec2 InputStickValue; // 0x90
        Float32 RadialCenterX; // 0x98
        Float32 RadialCenterY; // 0x9C
        Float32 MaxElementAngle; // 0xA0
        Float32 DeselectRadius; // 0xA4
        Core::Vec2 InputAbsolutePosition; // 0xA8
    }; // 0xB0
    static_assert(sizeof(BFUIRadialSelectWidgetData) == 0xB0);
}
#pragma pack(pop)