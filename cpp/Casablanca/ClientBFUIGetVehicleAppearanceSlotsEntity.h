// Object: ClientBFUIGetVehicleAppearanceSlotsEntity
// ClassId: 6464
// RuntimeId: 20619
// TypeInfo: 0x0000000144CC38A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetVehicleAppearanceSlotsEntity : public Entity::Entity {
        char pad_0x20[0x80];
    }; // 0xA0
    static_assert(sizeof(ClientBFUIGetVehicleAppearanceSlotsEntity) == 0xA0);
}