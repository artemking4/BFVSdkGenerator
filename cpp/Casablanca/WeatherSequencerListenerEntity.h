// Object: WeatherSequencerListenerEntity
// ClassId: 8275
// RuntimeId: 33093
// TypeInfo: 0x0000000144C5D400
#include "../Entity/Entity.h"

namespace Casablanca {
    class WeatherSequencerListenerEntity : public Entity::Entity {
        char pad_0x20[0xD8];
    }; // 0xF8
    static_assert(sizeof(WeatherSequencerListenerEntity) == 0xF8);
}