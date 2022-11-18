// Object: UISensingIndicatorRootWidgetData
// ClassId: 3834
// RuntimeId: 61430
// TypeInfo: 0x0000000144D9BA10
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../GameShared/UIWidgetBlueprint.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UISensingIndicatorRootWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        GameShared::UIWidgetBlueprint SensingIndicatorWidgetBlueprint; // 0x80
        char pad_0x88[0x8];
    }; // 0x90
    static_assert(sizeof(UISensingIndicatorRootWidgetData) == 0x90);
}
#pragma pack(pop)