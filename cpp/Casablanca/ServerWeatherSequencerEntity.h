// Object: ServerWeatherSequencerEntity
// ClassId: 7796
// RuntimeId: 64777
// TypeInfo: 0x0000000144C20BA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerWeatherSequencerEntity : public Entity::Entity {
        char pad_0x20[0x370];
    }; // 0x390
    static_assert(sizeof(ServerWeatherSequencerEntity) == 0x390);
}