// Object: UINetStatsWidgetData
// ClassId: 3825
// RuntimeId: 19498
// TypeInfo: 0x0000000144D887A0
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../CasablancaShared/NetGraphInfoTypeSettings.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UINetStatsWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        GameShared::UIElementColor BackgroundColor; // 0x80
        GameShared::UIElementColor DividerColor; // 0xA0
        GameShared::UIElementColor UnitColor; // 0xC0
        GameShared::UIElementColor ValueColor; // 0xE0
        CasablancaShared::NetGraphInfoTypeSettings InfoTypeSettings; // 0x100
        GameShared::UIElementFontStyle FontStyle; // 0x108
        CString Divider; // 0x110
        Float32 DividerSpacing; // 0x118
        Float32 ValueSpacing; // 0x11C
    }; // 0x120
    static_assert(sizeof(UINetStatsWidgetData) == 0x120);
}
#pragma pack(pop)