// Object: BFUILegacyElementButtonStyle
// ClassId: 170
// RuntimeId: 45518
// TypeInfo: 0x0000000144D97690
#include "../CasablancaShared/BFUILegacyElementStyle.h"
#include "../Global/CString.h"
#include "../CasablancaShared/BFUILegacyElementFillData.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../GameShared/UIElementColor.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUILegacyElementButtonStyle : public CasablancaShared::BFUILegacyElementStyle {
        CString TextureId; // 0x20
        char pad_0x28[0x8];
        GameShared::UIElementColor NormalTextColor; // 0x30
        GameShared::UIElementColor HoveredTextColor; // 0x50
        GameShared::UIElementColor PressedTextColor; // 0x70
        GameShared::UIElementColor DisabledTextColor; // 0x90
        CasablancaShared::BFUILegacyElementFillData FillDataNormal; // 0xB0
        CasablancaShared::BFUILegacyElementFillData FillDataHovered; // 0xB8
        CasablancaShared::BFUILegacyElementFillData FillDataPressed; // 0xC0
        CasablancaShared::BFUILegacyElementFillData FillDataDisabled; // 0xC8
        GameShared::UIElementFontStyle NormalFontStyle; // 0xD0
        GameShared::UIElementFontEffect NormalFontEffect; // 0xD8
        GameShared::UIElementFontStyle HoveredFontStyle; // 0xE0
        GameShared::UIElementFontEffect HoveredFontEffect; // 0xE8
        GameShared::UIElementFontStyle PressedFontStyle; // 0xF0
        GameShared::UIElementFontEffect PressedFontEffect; // 0xF8
        GameShared::UIElementFontStyle DisabledFontStyle; // 0x100
        GameShared::UIElementFontEffect DisabledFontEffect; // 0x108
    }; // 0x110
    static_assert(sizeof(BFUILegacyElementButtonStyle) == 0x110);
}
#pragma pack(pop)