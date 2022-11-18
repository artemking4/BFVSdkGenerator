// Object: BFSpartaPartyJoinGameSession
// ClassId: 4711
// RuntimeId: 14222
// TypeInfo: 0x0000000144C70120
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyJoinGameSession : public SpartaShared::SpartaPayload {
        Uint64 GameId; // 0x18
        Boolean ClaimReservation; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFSpartaPartyJoinGameSession) == 0x28);
}
#pragma pack(pop)