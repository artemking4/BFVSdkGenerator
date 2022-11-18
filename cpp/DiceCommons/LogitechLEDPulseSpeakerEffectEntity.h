// Object: LogitechLEDPulseSpeakerEffectEntity
// ClassId: 7251
// RuntimeId: 2809
// TypeInfo: 0x0000000144DB17E0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDPulseSpeakerEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDPulseSpeakerEffectEntity) == 0x30);
}