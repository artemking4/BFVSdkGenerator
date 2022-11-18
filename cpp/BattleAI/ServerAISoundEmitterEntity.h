// Object: ServerAISoundEmitterEntity
// ClassId: 7421
// RuntimeId: 60259
// TypeInfo: 0x0000000144BF48C0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerAISoundEmitterEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerAISoundEmitterEntity) == 0x70);
}