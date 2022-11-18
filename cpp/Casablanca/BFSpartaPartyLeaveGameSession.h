// Object: BFSpartaPartyLeaveGameSession
// ClassId: 4717
// RuntimeId: 39561
// TypeInfo: 0x0000000144C700A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyLeaveGameSession : public SpartaShared::SpartaPayload {
        Uint64 GameId; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyLeaveGameSession) == 0x20);
}
#pragma pack(pop)