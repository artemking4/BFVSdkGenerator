// Object: CasablancaSpartaGetPlayerListResponse
// ClassId: 4783
// RuntimeId: 64573
// TypeInfo: 0x0000000144C72220
#include "../SpartaShared/SpartaPayload.h"
#include "../SpartaShared/SpartaPlayerList.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CasablancaSpartaGetPlayerListResponse : public SpartaShared::SpartaPayload {
        SpartaShared::SpartaPlayerList PlayerList; // 0x18
    }; // 0x28
    static_assert(sizeof(CasablancaSpartaGetPlayerListResponse) == 0x28);
}
#pragma pack(pop)