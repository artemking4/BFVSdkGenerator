// Object: UIMajorMessageEvent
// ClassId: 5401
// RuntimeId: 21389
// TypeInfo: 0x0000000144D1E1F0
#include "../CasablancaShared/UIGameEvent.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIMajorMessageEvent : public CasablancaShared::UIGameEvent {
        CString MessageId; // 0x20
    }; // 0x28
    static_assert(sizeof(UIMajorMessageEvent) == 0x28);
}
#pragma pack(pop)