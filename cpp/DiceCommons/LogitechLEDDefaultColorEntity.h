// Object: LogitechLEDDefaultColorEntity
// ClassId: 7244
// RuntimeId: 26475
// TypeInfo: 0x0000000144DB1F50
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDDefaultColorEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDDefaultColorEntity) == 0x30);
}