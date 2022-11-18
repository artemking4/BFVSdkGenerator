// Object: TooltipMessageEntityInfo
// ClassId: 4298
// RuntimeId: 25055
// TypeInfo: 0x0000000144C330F0
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Casablanca/MessageLineData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class TooltipMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString MessageSid; // 0x18
        Float32 DisplayTime; // 0x20
        char pad_0x24[0x4];
        Array<Casablanca::MessageLineData> AdditionalMessages; // 0x28
        Int32 EntryInputAction; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(TooltipMessageEntityInfo) == 0x38);
}
#pragma pack(pop)