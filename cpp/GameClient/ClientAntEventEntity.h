// Object: ClientAntEventEntity
// ClassId: 6329
// RuntimeId: 5836
// TypeInfo: 0x0000000144E3E1E0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientAntEventEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientAntEventEntity) == 0xF0);
}