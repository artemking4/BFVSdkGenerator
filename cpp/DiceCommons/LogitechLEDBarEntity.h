// Object: LogitechLEDBarEntity
// ClassId: 7239
// RuntimeId: 35975
// TypeInfo: 0x0000000144DB24A0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDBarEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(LogitechLEDBarEntity) == 0x38);
}