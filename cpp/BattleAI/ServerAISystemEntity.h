// Object: ServerAISystemEntity
// ClassId: 7423
// RuntimeId: 63769
// TypeInfo: 0x0000000144BF46A0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAISystemEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerAISystemEntity) == 0x30);
}