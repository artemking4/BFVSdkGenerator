// Object: ClientBFUIGetUIObjectListIndexEntity
// ClassId: 6460
// RuntimeId: 24264
// TypeInfo: 0x0000000144CC3DF0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetUIObjectListIndexEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUIGetUIObjectListIndexEntity) == 0x80);
}