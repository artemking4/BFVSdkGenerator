// Object: LogitechLEDConstantBitmapEffectEntity
// ClassId: 7241
// RuntimeId: 58169
// TypeInfo: 0x0000000144DB2280
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDConstantBitmapEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDConstantBitmapEffectEntity) == 0x30);
}