// Object: ClientUIObjectivesEntity
// ClassId: 6978
// RuntimeId: 19705
// TypeInfo: 0x0000000144CAE5F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIObjectivesEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientUIObjectivesEntity) == 0x80);
}