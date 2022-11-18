// Object: BFUINavigationPointCloudWidgetData
// ClassId: 3803
// RuntimeId: 43017
// TypeInfo: 0x0000000144D96B10
#include "../CasablancaShared/BFUINavigationWidgetData.h"
#include "../Core/Vec2.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUINavigationPointCloudWidgetData : public CasablancaShared::BFUINavigationWidgetData {
        Core::Vec2 InputStickValue; // 0x90
        Float32 MaxAngle; // 0x98
        char pad_0x9C[0x4];
    }; // 0xA0
    static_assert(sizeof(BFUINavigationPointCloudWidgetData) == 0xA0);
}
#pragma pack(pop)