// Object: BFSpartaPartyUpdatedResp
// ClassId: 4727
// RuntimeId: 53164
// TypeInfo: 0x0000000144C6FB20
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/Int32.h"
#include "../Casablanca/BFSpartaPartyPresenceMode.h"
#include "../Global/Boolean.h"
#include "../Casablanca/BFSpartaOutgoingGroupAttribute.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyUpdatedResp : public SpartaShared::SpartaPayload {
        Uint64 GameId; // 0x18
        Uint64 PartyId; // 0x20
        Int32 UpdateReason; // 0x28
        Casablanca::BFSpartaPartyPresenceMode PresenceMode; // 0x2C
        Int32 MaxMembers; // 0x30
        char pad_0x34[0x4];
        Array<Casablanca::BFSpartaOutgoingGroupAttribute> GroupAttributes; // 0x38
        Boolean EnableVoip; // 0x40
        Boolean OpenToMatchmaking; // 0x41
        Boolean OpenToBrowsing; // 0x42
        Boolean OpenToInvites; // 0x43
        Boolean OpenToJoinByPlayer; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(BFSpartaPartyUpdatedResp) == 0x48);
}
#pragma pack(pop)