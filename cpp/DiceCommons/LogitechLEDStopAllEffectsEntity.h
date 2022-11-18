// Object: LogitechLEDStopAllEffectsEntity
// ClassId: 7252
// RuntimeId: 61933
// TypeInfo: 0x0000000144DB16D0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class LogitechLEDStopAllEffectsEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(LogitechLEDStopAllEffectsEntity) == 0x30);
}