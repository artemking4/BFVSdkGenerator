// Object: UIChatPromptWidgetData
// ClassId: 3812
// RuntimeId: 52832
// TypeInfo: 0x0000000144D9BE10
#include "../CasablancaShared/BFUIWidgetEntityData.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Core/Vec4.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIChatPromptWidgetData : public CasablancaShared::BFUIWidgetEntityData {
        Core::Vec4 BackgroundColor; // 0x80
        Core::Vec4 HintColor; // 0x90
        GameShared::UIElementFontStyle MessageFont; // 0xA0
        GameShared::UIElementFontStyle ChannelFont; // 0xA8
        GameShared::UIElementFontStyle MessageFontMagnified; // 0xB0
        GameShared::UIElementFontStyle ChannelFontMagnified; // 0xB8
        GameShared::UIElementFontEffect MessageEffect; // 0xC0
        Float32 ChatMagnificationScale; // 0xC8
        Int32 PromptOffset; // 0xCC
        Int32 PromptButtonIconOffset; // 0xD0
        Int32 ChatMessageOffset; // 0xD4
        CString ChangeChannelHintStringId; // 0xD8
        CString ChatHintStringId; // 0xE0
        CString NoChannelsHintStringId; // 0xE8
        CString ChannelNotAvailableHintStringId; // 0xF0
        CString ChatPromptKeyNotBoundStringId; // 0xF8
        Float32 VisibleTime; // 0x100
        Uint32 MaxChatLength; // 0x104
        char pad_0x108[0x8];
    }; // 0x110
    static_assert(sizeof(UIChatPromptWidgetData) == 0x110);
}
#pragma pack(pop)