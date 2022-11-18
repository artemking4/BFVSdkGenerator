// Object: ServerWeatherTrackerEntity
// ClassId: 7797
// RuntimeId: 41100
// TypeInfo: 0x0000000144CE19B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerWeatherTrackerEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerWeatherTrackerEntity) == 0x30);
}