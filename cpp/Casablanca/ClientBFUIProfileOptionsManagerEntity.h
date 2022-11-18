// Object: ClientBFUIProfileOptionsManagerEntity
// ClassId: 6549
// RuntimeId: 10478
// TypeInfo: 0x0000000144CBC870
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIProfileOptionsManagerEntity : public Entity::Entity {
        char pad_0x20[0xC0];
    }; // 0xE0
    static_assert(sizeof(ClientBFUIProfileOptionsManagerEntity) == 0xE0);
}