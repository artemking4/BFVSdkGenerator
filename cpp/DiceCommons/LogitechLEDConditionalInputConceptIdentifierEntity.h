// Object: LogitechLEDConditionalInputConceptIdentifierEntity
// ClassId: 7240
// RuntimeId: 25985
// TypeInfo: 0x0000000144DB2390
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDConditionalInputConceptIdentifierEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(LogitechLEDConditionalInputConceptIdentifierEntity) == 0x38);
}