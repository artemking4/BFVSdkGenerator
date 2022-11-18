// Object: ServerWeatherSequencerControllerEntity
// ClassId: 7795
// RuntimeId: 53599
// TypeInfo: 0x0000000144C20CB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerWeatherSequencerControllerEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ServerWeatherSequencerControllerEntity) == 0x68);
}