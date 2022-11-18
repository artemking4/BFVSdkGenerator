// Object: PlayerEventConversionEntity
// ClassId: 7310
// RuntimeId: 13287
// TypeInfo: 0x0000000144C1F930
#include "../Entity/Entity.h"

namespace Casablanca {
    class PlayerEventConversionEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(PlayerEventConversionEntity) == 0x38);
}