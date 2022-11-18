// Object: UIAbilityMessageEvent
// ClassId: 5399
// RuntimeId: 43108
// TypeInfo: 0x0000000144D1E0F0
#include "../CasablancaShared/UIGameEvent.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIAbilityMessageEvent : public CasablancaShared::UIGameEvent {
        CString DescriptionSID; // 0x20
        CString IconId; // 0x28
    }; // 0x30
    static_assert(sizeof(UIAbilityMessageEvent) == 0x30);
}
#pragma pack(pop)