// Object: BFUIElementChatHistoryEntityData
// ClassId: 3647
// RuntimeId: 3820
// TypeInfo: 0x0000000144D02FA0
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../GameShared/UIElementFontStyle.h"
#include "../GameShared/UIElementFontEffect.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIElementChatHistoryEntityData : public CasablancaShared::BFUIElementEntityData {
        Core::Vec3 AdminColor; // 0x130
        GameShared::UIElementFontStyle ChannelFont; // 0x140
        GameShared::UIElementFontEffect ChannelEffect; // 0x148
        GameShared::UIElementFontStyle SenderFont; // 0x150
        GameShared::UIElementFontEffect SenderEffect; // 0x158
        GameShared::UIElementFontStyle MessageFont; // 0x160
        GameShared::UIElementFontEffect MessageEffect; // 0x168
        Float32 RowSpacing; // 0x170
        Float32 ScrollOffset; // 0x174
        Boolean KeepPositionWhenNewMessagesAreReceived; // 0x178
        char pad_0x179[0x7];
    }; // 0x180
    static_assert(sizeof(BFUIElementChatHistoryEntityData) == 0x180);
}
#pragma pack(pop)