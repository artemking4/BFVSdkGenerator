// Object: ServerTokenCountModifierEntity
// ClassId: 7753
// RuntimeId: 53022
// TypeInfo: 0x0000000144BF4150
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerTokenCountModifierEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerTokenCountModifierEntity) == 0x70);
}