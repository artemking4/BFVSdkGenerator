// Object: LogitechLEDInputConceptIdentifierEntity
// ClassId: 7248
// RuntimeId: 55052
// TypeInfo: 0x0000000144DB1B10
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDInputConceptIdentifierEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(LogitechLEDInputConceptIdentifierEntity) == 0x38);
}