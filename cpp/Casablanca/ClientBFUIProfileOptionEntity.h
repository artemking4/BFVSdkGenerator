// Object: ClientBFUIProfileOptionEntity
// ClassId: 6540
// RuntimeId: 49406
// TypeInfo: 0x0000000144CBD0F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIProfileOptionEntity) == 0x40);
}