// Object: BFUIInputActionListenerElementEntityData
// ClassId: 3674
// RuntimeId: 15334
// TypeInfo: 0x0000000144D9A710
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../UI/UIInputAction.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIInputActionListenerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        UI::UIInputAction InputAction; // 0x130
        Boolean ConsumeInput; // 0x134
        char pad_0x135[0xB];
    }; // 0x140
    static_assert(sizeof(BFUIInputActionListenerElementEntityData) == 0x140);
}
#pragma pack(pop)