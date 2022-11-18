// Object: ClientPlayerCounterEntity
// ClassId: 6800
// RuntimeId: 22947
// TypeInfo: 0x0000000144CD8550
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayerCounterEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientPlayerCounterEntity) == 0xA8);
}