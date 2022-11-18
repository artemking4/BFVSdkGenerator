// Object: BFSpartaPartyJoinUserAndGroupResp
// ClassId: 4715
// RuntimeId: 43048
// TypeInfo: 0x0000000144C6F8A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"
#include "../Global/Boolean.h"
#include "../Casablanca/SpartaPartyResponseResult.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyJoinUserAndGroupResp : public SpartaShared::SpartaPayload {
        Uint64 LeaderPersonaId; // 0x18
        Uint64 PartyId; // 0x20
        Casablanca::SpartaPartyResponseResult Result; // 0x28
        Boolean IsSuccess; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(BFSpartaPartyJoinUserAndGroupResp) == 0x30);
}
#pragma pack(pop)