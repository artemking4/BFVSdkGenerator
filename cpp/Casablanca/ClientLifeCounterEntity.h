// Object: ClientLifeCounterEntity
// ClassId: 6738
// RuntimeId: 53507
// TypeInfo: 0x0000000144CD5710
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientLifeCounterEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientLifeCounterEntity) == 0xE0);
}