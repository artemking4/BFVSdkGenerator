// Object: BFSpartaPartyPromoteLeader
// ClassId: 4719
// RuntimeId: 25774
// TypeInfo: 0x0000000144C702A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Uint64.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyPromoteLeader : public SpartaShared::SpartaPayload {
        Uint64 PlatformId; // 0x18
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyPromoteLeader) == 0x20);
}
#pragma pack(pop)