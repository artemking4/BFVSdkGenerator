// Object: ClientSpectatorAreaEntity
// ClassId: 6870
// RuntimeId: 30034
// TypeInfo: 0x0000000144CD7AB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSpectatorAreaEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientSpectatorAreaEntity) == 0x50);
}