// Object: LogitechLEDFadeSpeakerEffectEntity
// ClassId: 7247
// RuntimeId: 3920
// TypeInfo: 0x0000000144DB1C20
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDFadeSpeakerEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDFadeSpeakerEffectEntity) == 0x30);
}