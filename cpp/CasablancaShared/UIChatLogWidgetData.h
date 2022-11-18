// Object: UIChatLogWidgetData
// ClassId: 3811
// RuntimeId: 33018
// TypeInfo: 0x0000000144D9BD90
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Core/Vec4.h"
#include "../CasablancaShared/UIChatLogSettings.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIChatLogWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::Vec4 ActiveBackgroundColor; // 0x80
        Core::Vec4 PassiveBackgroundColor; // 0x90
        GameShared::UIElementFontStyle MessageFont; // 0xA0
        GameShared::UIElementFontStyle NameFont; // 0xA8
        GameShared::UIElementFontStyle MessageFontMagnified; // 0xB0
        GameShared::UIElementFontStyle NameFontMagnified; // 0xB8
        GameShared::UIElementFontEffect MessageEffectActive; // 0xC0
        GameShared::UIElementFontEffect MessageEffectPassive; // 0xC8
        Float32 ChatMagnificationScale; // 0xD0
        Uint32 ChatLineCountActive; // 0xD4
        Uint32 ChatLineCountPassive; // 0xD8
        Int32 ChatLineDistance; // 0xDC
        Int32 TextBoxInsetX; // 0xE0
        Int32 TextBoxInsetY; // 0xE4
        Float32 ScrollbarWidth; // 0xE8
        Float32 ScrollbarMargin; // 0xEC
        Float32 ChannelIdColorWidth; // 0xF0
        Float32 VisibleTime; // 0xF4
        Float32 FadeoutTime; // 0xF8
        Uint32 ChatEntryHistoryCount; // 0xFC
        Array<CasablancaShared::UIChatLogSettings> ChatLogSettings; // 0x100
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(UIChatLogWidgetData) == 0x110);
}
#pragma pack(pop)