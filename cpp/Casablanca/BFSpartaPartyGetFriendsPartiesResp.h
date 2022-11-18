// Object: BFSpartaPartyGetFriendsPartiesResp
// ClassId: 4689
// RuntimeId: 60971
// TypeInfo: 0x0000000144C6FA20
#include "../Casablanca/BFSpartaGameGroupsUpdate.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaPartyGetFriendsPartiesResp : public Casablanca::BFSpartaGameGroupsUpdate {
        Int32 ListIndex; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFSpartaPartyGetFriendsPartiesResp) == 0x28);
}
#pragma pack(pop)