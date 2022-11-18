// Object: ServerDoublePlayerEventEntity
// ClassId: 7528
// RuntimeId: 52932
// TypeInfo: 0x0000000144C3BC90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDoublePlayerEventEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerDoublePlayerEventEntity) == 0x48);
}