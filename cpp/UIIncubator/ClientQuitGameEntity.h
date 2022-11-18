// Object: ClientQuitGameEntity
// ClassId: 6831
// RuntimeId: 27874
// TypeInfo: 0x0000000144F6A450
#include "../Entity/Entity.h"

namespace UIIncubator {
    class ClientQuitGameEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientQuitGameEntity) == 0x30);
}