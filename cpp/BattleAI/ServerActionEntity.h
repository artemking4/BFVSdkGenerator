// Object: ServerActionEntity
// ClassId: 7427
// RuntimeId: 43155
// TypeInfo: 0x0000000144BFBFE0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerActionEntity : public Entity::Entity {
        char pad_0x20[0x1F0];
    }; // 0x210
    static_assert(sizeof(ServerActionEntity) == 0x210);
}