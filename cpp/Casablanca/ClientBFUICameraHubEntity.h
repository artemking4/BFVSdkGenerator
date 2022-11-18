// Object: ClientBFUICameraHubEntity
// ClassId: 6370
// RuntimeId: 30664
// TypeInfo: 0x0000000144CAB2F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICameraHubEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientBFUICameraHubEntity) == 0xA8);
}