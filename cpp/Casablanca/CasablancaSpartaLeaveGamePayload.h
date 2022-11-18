// Object: CasablancaSpartaLeaveGamePayload
// ClassId: 4790
// RuntimeId: 44231
// TypeInfo: 0x0000000144C72A20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaLeaveGamePayload : public SpartaShared::SpartaPayload {
        CString GameId; // 0x18
    }; // 0x20
    static_assert(sizeof(CasablancaSpartaLeaveGamePayload) == 0x20);
}
#pragma pack(pop)