// Object: BFSpartaPartyGameIdResp
// ClassId: 4708
// RuntimeId: 63019
// TypeInfo: 0x0000000144C6FC20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyGameIdResp : public SpartaShared::SpartaPayload {
        Uint64 GameId; // 0x18
        Uint64 PartyId; // 0x20
    }; // 0x28
    static_assert(sizeof(BFSpartaPartyGameIdResp) == 0x28);
}
#pragma pack(pop)