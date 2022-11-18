// Object: ClientDoublePlayerEventEntity
// ClassId: 6678
// RuntimeId: 41726
// TypeInfo: 0x0000000144CD2770
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDoublePlayerEventEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientDoublePlayerEventEntity) == 0x48);
}