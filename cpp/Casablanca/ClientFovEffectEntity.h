// Object: ClientFovEffectEntity
// ClassId: 6715
// RuntimeId: 65332
// TypeInfo: 0x0000000144CD5D70
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFovEffectEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientFovEffectEntity) == 0x30);
}