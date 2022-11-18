// Object: SubtitleMessageEntityInfo
// ClassId: 4296
// RuntimeId: 10986
// TypeInfo: 0x0000000144C32FF0
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class SubtitleMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString MessageSid; // 0x18
        Float32 DisplayTime; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SubtitleMessageEntityInfo) == 0x28);
}
#pragma pack(pop)