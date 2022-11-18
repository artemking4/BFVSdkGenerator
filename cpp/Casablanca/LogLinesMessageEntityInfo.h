// Object: LogLinesMessageEntityInfo
// ClassId: 4293
// RuntimeId: 50065
// TypeInfo: 0x0000000144C33070
#include "../GameShared/MessageEntityInfo.h"
#include "../Global/CString.h"
#include "../Global/Float32.h"
#include "../Casablanca/MessageLineData.h"

#pragma pack(push, 8)
namespace Casablanca {
    class LogLinesMessageEntityInfo : public GameShared::MessageEntityInfo {
        CString MessageSid; // 0x18
        Float32 DisplayTime; // 0x20
        char pad_0x24[0x4];
        Array<Casablanca::MessageLineData> AdditionalMessages; // 0x28
    }; // 0x30
    static_assert(sizeof(LogLinesMessageEntityInfo) == 0x30);
}
#pragma pack(pop)