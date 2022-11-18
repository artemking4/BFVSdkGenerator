// Object: NotificationMessageEntityInfo
// ClassId: 4294
// RuntimeId: 27280
// TypeInfo: 0x0000000144C32E70
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class NotificationMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString MessageSid; // 0x18
    }; // 0x20
    static_assert(sizeof(NotificationMessageEntityInfo) == 0x20);
}
#pragma pack(pop)