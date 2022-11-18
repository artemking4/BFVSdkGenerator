// Object: ClientUIObjectivesDataProviderEntity
// ClassId: 6977
// RuntimeId: 45026
// TypeInfo: 0x0000000144CB84B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIObjectivesDataProviderEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientUIObjectivesDataProviderEntity) == 0x60);
}