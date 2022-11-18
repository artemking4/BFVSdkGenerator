// Object: ClientWeatherSequencerEntity
// ClassId: 7059
// RuntimeId: 723
// TypeInfo: 0x0000000144C1E640
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientWeatherSequencerEntity : public Entity::Entity {
        char pad_0x20[0x1F0];
    }; // 0x210
    static_assert(sizeof(ClientWeatherSequencerEntity) == 0x210);
}