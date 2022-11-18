// Object: ClientBFUICapturePointTransportVehicleInfoEntity
// ClassId: 6373
// RuntimeId: 46580
// TypeInfo: 0x0000000144CB06C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICapturePointTransportVehicleInfoEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUICapturePointTransportVehicleInfoEntity) == 0x80);
}