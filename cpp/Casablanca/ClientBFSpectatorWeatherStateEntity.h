// Object: ClientBFSpectatorWeatherStateEntity
// ClassId: 6359
// RuntimeId: 2362
// TypeInfo: 0x0000000144CCC510
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFSpectatorWeatherStateEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFSpectatorWeatherStateEntity) == 0x48);
}