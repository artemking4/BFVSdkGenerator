// Object: UICriticalMessageEvent
// ClassId: 5400
// RuntimeId: 46523
// TypeInfo: 0x0000000144D1E270
#include "../CasablancaShared/UIGameEvent.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UICriticalMessageEvent : public CasablancaShared::UIGameEvent {
        CString MessageId; // 0x20
    }; // 0x28
    static_assert(sizeof(UICriticalMessageEvent) == 0x28);
}
#pragma pack(pop)