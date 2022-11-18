// Object: ClientFindVehicleWeaponInLoadoutSlotDataEntity
// ClassId: 6703
// RuntimeId: 24083
// TypeInfo: 0x0000000144C58D10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFindVehicleWeaponInLoadoutSlotDataEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientFindVehicleWeaponInLoadoutSlotDataEntity) == 0x48);
}