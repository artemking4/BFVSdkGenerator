// Object: BFUIMouseInputListenerElementEntityData
// ClassId: 3678
// RuntimeId: 44406
// TypeInfo: 0x0000000144D9A610
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../UI/UIMouseButton.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIMouseInputListenerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        UI::UIMouseButton MouseButton; // 0x130
        Boolean ConsumeInput; // 0x134
        Boolean FullScreen; // 0x135
        char pad_0x136[0xA];
    }; // 0x140
    static_assert(sizeof(BFUIMouseInputListenerElementEntityData) == 0x140);
}
#pragma pack(pop)