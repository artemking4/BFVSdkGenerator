// Object: CommanderActionMessageEntityInfo
// ClassId: 4289
// RuntimeId: 52431
// TypeInfo: 0x0000000144C32D70
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CommanderActionMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString MessageSid; // 0x18
    }; // 0x20
    static_assert(sizeof(CommanderActionMessageEntityInfo) == 0x20);
}
#pragma pack(pop)