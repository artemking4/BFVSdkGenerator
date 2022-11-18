// Object: BFUILegacyElementTableStyle
// ClassId: 173
// RuntimeId: 42824
// TypeInfo: 0x0000000144D97510
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../CasablancaShared/BFUILegacyElementScrollbarStyle.h"
#include "../CasablancaShared/BFUILegacyElementFillData.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUILegacyElementTableStyle : public CasablancaShared::BFUILegacyElementStyle {
        CasablancaShared::BFUILegacyElementScrollbarStyle StyleScroll; // 0x20
        CasablancaShared::BFUILegacyElementFillData FillHeader; // 0x28
        CasablancaShared::BFUILegacyElementFillData FillCell; // 0x30
        GameShared::UIElementFontStyle HeaderFontStyle; // 0x38
        GameShared::UIElementFontStyle CellFontStyle; // 0x40
        CasablancaShared::BFUILegacyElementFillData FillRowsBounds; // 0x48
        Float32 HeaderHeight; // 0x50
        Float32 RowHeight; // 0x54
    }; // 0x58
    static_assert(sizeof(BFUILegacyElementTableStyle) == 0x58);
}
#pragma pack(pop)