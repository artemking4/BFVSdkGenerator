// Object: ClientBFUIIconStateEntity
// ClassId: 6481
// RuntimeId: 62725
// TypeInfo: 0x0000000144C97F00
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIIconStateEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientBFUIIconStateEntity) == 0x50);
}