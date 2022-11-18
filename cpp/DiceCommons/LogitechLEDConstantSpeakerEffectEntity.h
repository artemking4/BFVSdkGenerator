// Object: LogitechLEDConstantSpeakerEffectEntity
// ClassId: 7243
// RuntimeId: 59979
// TypeInfo: 0x0000000144DB2060
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDConstantSpeakerEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDConstantSpeakerEffectEntity) == 0x30);
}