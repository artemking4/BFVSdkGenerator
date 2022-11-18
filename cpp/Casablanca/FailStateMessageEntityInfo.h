// Object: FailStateMessageEntityInfo
// ClassId: 4292
// RuntimeId: 46975
// TypeInfo: 0x0000000144C32F70
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class FailStateMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString MessageSid; // 0x18
    }; // 0x20
    static_assert(sizeof(FailStateMessageEntityInfo) == 0x20);
}
#pragma pack(pop)