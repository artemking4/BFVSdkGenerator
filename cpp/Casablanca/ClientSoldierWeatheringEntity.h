// Object: ClientSoldierWeatheringEntity
// ClassId: 6864
// RuntimeId: 52479
// TypeInfo: 0x0000000144C54880
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSoldierWeatheringEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientSoldierWeatheringEntity) == 0xF0);
}