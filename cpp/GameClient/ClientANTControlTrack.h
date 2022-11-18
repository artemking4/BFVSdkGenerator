// Object: ClientANTControlTrack
// ClassId: 8616
// RuntimeId: 58871
// TypeInfo: 0x0000000144E3DB90
#include "../GameCommon/ANTControlTrack.h"

namespace GameClient {
    class ClientANTControlTrack : public GameCommon::ANTControlTrack {
        char pad_0x80[0x8];
    }; // 0x88
    static_assert(sizeof(ClientANTControlTrack) == 0x88);
}