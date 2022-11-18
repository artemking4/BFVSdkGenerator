// Object: SpartaLeaveGamePayload
// ClassId: 4829
// RuntimeId: 61933
// TypeInfo: 0x0000000144F4FE40
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace SpartaShared {
    class SpartaLeaveGamePayload : public SpartaShared::SpartaPayload {
        CString GameId; // 0x18
    }; // 0x20
    static_assert(sizeof(SpartaLeaveGamePayload) == 0x20);
}
#pragma pack(pop)