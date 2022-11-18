// Object: ClientHorseSpringEntity
// ClassId: 6726
// RuntimeId: 22815
// TypeInfo: 0x0000000144CD1890
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientHorseSpringEntity : public Entity::Entity {
        char pad_0x20[0x140];
    }; // 0x160
    static_assert(sizeof(ClientHorseSpringEntity) == 0x160);
}