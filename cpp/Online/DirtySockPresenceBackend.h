// Object: DirtySockPresenceBackend
// ClassId: 8409
// RuntimeId: 52988
// TypeInfo: 0x0000000144F04F10
#include "../Online/PresenceBackend.h"

namespace Online {
    class DirtySockPresenceBackend : public Online::PresenceBackend {
        char pad_0x40[0x68];
    }; // 0xA8
    static_assert(sizeof(DirtySockPresenceBackend) == 0xA8);
}