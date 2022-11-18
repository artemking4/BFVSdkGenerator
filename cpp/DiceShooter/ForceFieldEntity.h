// Object: ForceFieldEntity
// ClassId: 7182
// RuntimeId: 57179
// TypeInfo: 0x0000000144DD4860
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ForceFieldEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ForceFieldEntity) == 0x70);
}