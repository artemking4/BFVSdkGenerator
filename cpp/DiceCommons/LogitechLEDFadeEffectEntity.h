// Object: LogitechLEDFadeEffectEntity
// ClassId: 7246
// RuntimeId: 65241
// TypeInfo: 0x0000000144DB1D30
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDFadeEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDFadeEffectEntity) == 0x30);
}