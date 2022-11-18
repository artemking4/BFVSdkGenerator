// Object: ClientBFUIMinimapPlayerViewEntity
// ClassId: 6491
// RuntimeId: 37146
// TypeInfo: 0x0000000144C9ACA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIMinimapPlayerViewEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientBFUIMinimapPlayerViewEntity) == 0x88);
}