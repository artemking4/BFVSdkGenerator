// Object: BFSpartaPartyGetFriendsParties
// ClassId: 4710
// RuntimeId: 39322
// TypeInfo: 0x0000000144C705A0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyGetFriendsParties : public SpartaShared::SpartaPayload {
        Int32 ListIndex; // 0x18
        Boolean FilterOutInGames; // 0x1C
        char pad_0x1D[0x3];
    }; // 0x20
    static_assert(sizeof(BFSpartaPartyGetFriendsParties) == 0x20);
}
#pragma pack(pop)