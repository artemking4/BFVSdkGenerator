// Object: ServerDamageModifierEntity
// ClassId: 7498
// RuntimeId: 15991
// TypeInfo: 0x0000000144BF4370
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerDamageModifierEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerDamageModifierEntity) == 0x70);
}