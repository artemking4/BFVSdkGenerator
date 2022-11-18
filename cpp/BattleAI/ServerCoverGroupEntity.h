// Object: ServerCoverGroupEntity
// ClassId: 7475
// RuntimeId: 34997
// TypeInfo: 0x0000000144BFD250
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerCoverGroupEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerCoverGroupEntity) == 0x30);
}