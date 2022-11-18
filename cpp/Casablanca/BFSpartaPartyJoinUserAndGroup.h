// Object: BFSpartaPartyJoinUserAndGroup
// ClassId: 4714
// RuntimeId: 10374
// TypeInfo: 0x0000000144C6FDA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyJoinUserAndGroup : public SpartaShared::SpartaPayload {
        Uint64 LeaderPersonaId; // 0x18
        Uint64 PartyId; // 0x20
    }; // 0x28
    static_assert(sizeof(BFSpartaPartyJoinUserAndGroup) == 0x28);
}
#pragma pack(pop)