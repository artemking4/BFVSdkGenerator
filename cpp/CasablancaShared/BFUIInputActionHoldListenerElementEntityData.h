// Object: BFUIInputActionHoldListenerElementEntityData
// ClassId: 3673
// RuntimeId: 60518
// TypeInfo: 0x0000000144D9A690
#include "../CasablancaShared/BFUIElementEntityData.h"
#include "../UI/UIInputAction.h"
#include "../CasablancaShared/UIHoldLength.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class BFUIInputActionHoldListenerElementEntityData : public CasablancaShared::BFUIElementEntityData {
        UI::UIInputAction InputAction; // 0x130
        CasablancaShared::UIHoldLength HoldLength; // 0x134
        Boolean ConsumeInput; // 0x138
        char pad_0x139[0x7];
    }; // 0x140
    static_assert(sizeof(BFUIInputActionHoldListenerElementEntityData) == 0x140);
}
#pragma pack(pop)