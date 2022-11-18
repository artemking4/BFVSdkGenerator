// Object: CommanderObjectiveEventMessageEntityInfo
// ClassId: 4290
// RuntimeId: 9004
// TypeInfo: 0x0000000144C32DF0
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CommanderObjectiveEventMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString ObjectiveSid; // 0x18
        CString DescriptionSid; // 0x20
    }; // 0x28
    static_assert(sizeof(CommanderObjectiveEventMessageEntityInfo) == 0x28);
}
#pragma pack(pop)