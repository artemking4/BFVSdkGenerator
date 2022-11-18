// Object: BFSpartaGetPartyMembersResp
// ClassId: 4692
// RuntimeId: 39452
// TypeInfo: 0x0000000144C6FBA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Casablanca/BFSpartaPartyMember.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaGetPartyMembersResp : public SpartaShared::SpartaPayload {
        Array<Casablanca::BFSpartaPartyMember> Members; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaGetPartyMembersResp) == 0x20);
}
#pragma pack(pop)