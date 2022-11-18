// Object: AudioRaycastCalculationEntity
// ClassId: 6191
// RuntimeId: 63441
// TypeInfo: 0x0000000144DD1170
#include "../Entity/Entity.h"

namespace DiceShooter {
    class AudioRaycastCalculationEntity : public Entity::Entity {
        char pad_0x20[0xBF8];
    }; // 0xC18
    static_assert(sizeof(AudioRaycastCalculationEntity) == 0xC18);
}