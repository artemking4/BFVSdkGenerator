// Object: EventLogMessageEntityInfo
// ClassId: 4291
// RuntimeId: 49628
// TypeInfo: 0x0000000144C32CF0
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class EventLogMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString MessageSid; // 0x18
        Boolean IncludePlayerName; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(EventLogMessageEntityInfo) == 0x28);
}
#pragma pack(pop)