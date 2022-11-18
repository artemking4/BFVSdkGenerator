// Object: PresenceAddPlayersMetParameters
// ClassId: 8439
// RuntimeId: 49892
// TypeInfo: 0x0000000144CF4DD0
#include "../Online/PresenceRequestParameters.h"

namespace Casablanca {
    class PresenceAddPlayersMetParameters : public Online::PresenceRequestParameters {
        char pad_0x10[0x10];
    }; // 0x20
    static_assert(sizeof(PresenceAddPlayersMetParameters) == 0x20);
}