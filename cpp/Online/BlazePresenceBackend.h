// Object: BlazePresenceBackend
// ClassId: 8407
// RuntimeId: 42030
// TypeInfo: 0x0000000144F04F90
#include "../Online/PresenceBackend.h"

namespace Online {
    class BlazePresenceBackend : public Online::PresenceBackend {
        char pad_0x40[0x88];
    }; // 0xC8
    static_assert(sizeof(BlazePresenceBackend) == 0xC8);
}