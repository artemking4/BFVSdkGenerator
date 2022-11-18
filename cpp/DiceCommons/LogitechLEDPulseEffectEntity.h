// Object: LogitechLEDPulseEffectEntity
// ClassId: 7250
// RuntimeId: 56935
// TypeInfo: 0x0000000144DB18F0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDPulseEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDPulseEffectEntity) == 0x30);
}