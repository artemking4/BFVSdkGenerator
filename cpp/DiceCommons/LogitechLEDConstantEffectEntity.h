// Object: LogitechLEDConstantEffectEntity
// ClassId: 7242
// RuntimeId: 4258
// TypeInfo: 0x0000000144DB2170
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDConstantEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDConstantEffectEntity) == 0x30);
}