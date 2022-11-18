// Object: BFSpartaPartyJoinParty
// ClassId: 4712
// RuntimeId: 25673
// TypeInfo: 0x0000000144C70620
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyJoinParty : public SpartaShared::SpartaPayload {
        Uint64 PartyId; // 0x18
        Boolean ClaimReservation; // 0x20
        Boolean JoinByBrowsing; // 0x21
        char pad_0x22[0x6];
    }; // 0x28
    static_assert(sizeof(BFSpartaPartyJoinParty) == 0x28);
}
#pragma pack(pop)