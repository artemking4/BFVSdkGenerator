// Object: BFSpartaGetBannedPlayersResponseMessage
// ClassId: 4691
// RuntimeId: 4240
// TypeInfo: 0x0000000144C6F520
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"
#include "../Casablanca/BannedPlayer.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaGetBannedPlayersResponseMessage : public SpartaShared::SpartaPayload {
        Array<Casablanca::BannedPlayer> Players; // 0x18
        Boolean Success; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(BFSpartaGetBannedPlayersResponseMessage) == 0x28);
}
#pragma pack(pop)