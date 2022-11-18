// Object: ServerLevelControlEntity
// ClassId: 7588
// RuntimeId: 57597
// TypeInfo: 0x0000000144E5C830
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerLevelControlEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ServerLevelControlEntity) == 0x80);
}