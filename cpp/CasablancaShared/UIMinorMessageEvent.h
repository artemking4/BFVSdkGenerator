// Object: UIMinorMessageEvent
// ClassId: 5402
// RuntimeId: 55855
// TypeInfo: 0x0000000144D1E170
#include "../CasablancaShared/UIGameEvent.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMinorMessageEvent : public CasablancaShared::UIGameEvent {
        CString MessageId; // 0x20
    }; // 0x28
    static_assert(sizeof(UIMinorMessageEvent) == 0x28);
}
#pragma pack(pop)