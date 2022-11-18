// Object: ClientVehicleEntity
// ClassId: 7899
// RuntimeId: 35173
// TypeInfo: 0x0000000144E3A170
#include "../GameClient/ClientControllableEntity.h"

namespace GameClient {
    class ClientVehicleEntity : public GameClient::ClientControllableEntity {
        char pad_0x338[0x568];
    }; // 0x8A0
    static_assert(sizeof(ClientVehicleEntity) == 0x8A0);
}