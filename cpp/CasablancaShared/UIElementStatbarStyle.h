// Object: UIElementStatbarStyle
// ClassId: 176
// RuntimeId: 10911
// TypeInfo: 0x0000000144D9CE90
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/BFUILegacyElementFillData.h"
#include "../GameShared/UIElementAlignment.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIElementStatbarStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::BFUILegacyElementFillData RectFill; // 0x20
        CasablancaShared::BFUILegacyElementFillData BarFill; // 0x28
        GameShared::UIElementAlignment HorizontalAlignment; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UIElementStatbarStyle) == 0x38);
}
#pragma pack(pop)