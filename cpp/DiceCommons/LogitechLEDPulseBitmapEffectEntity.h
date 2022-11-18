// Object: LogitechLEDPulseBitmapEffectEntity
// ClassId: 7249
// RuntimeId: 57020
// TypeInfo: 0x0000000144DB1A00
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDPulseBitmapEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDPulseBitmapEffectEntity) == 0x30);
}