// Object: ClientTripwireEntity
// ClassId: 7937
// RuntimeId: 15241
// TypeInfo: 0x0000000144F2F170
#include "../GameClient/ClientGameComponentEntity.h"

namespace Soldier {
    class ClientTripwireEntity : public GameClient::ClientGameComponentEntity {
        char pad_0x188[0x178];
    }; // 0x300
    static_assert(sizeof(ClientTripwireEntity) == 0x300);
}