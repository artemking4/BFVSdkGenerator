// Object: ServerFollowObjectEntity
// ClassId: 7555
// RuntimeId: 13786
// TypeInfo: 0x0000000144BFA1F0
#include "../Entity/Entity.h"

namespace BattleAI {
    class ServerFollowObjectEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ServerFollowObjectEntity) == 0x80);
}