// Object: BFSpartaVoipToggleMuteAllPlayersRequest
// ClassId: 4751
// RuntimeId: 31823
// TypeInfo: 0x0000000144C6EDA0
#include "../SpartaShared/SpartaPayload.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class BFSpartaVoipToggleMuteAllPlayersRequest : public SpartaShared::SpartaPayload {
        Boolean Mute; // 0x18
        char pad_0x19[0x7];
    }; // 0x20
    static_assert(sizeof(BFSpartaVoipToggleMuteAllPlayersRequest) == 0x20);
}
#pragma pack(pop)