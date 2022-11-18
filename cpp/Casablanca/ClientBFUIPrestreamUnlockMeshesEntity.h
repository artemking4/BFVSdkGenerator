// Object: ClientBFUIPrestreamUnlockMeshesEntity
// ClassId: 6534
// RuntimeId: 7280
// TypeInfo: 0x0000000144CA6690
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPrestreamUnlockMeshesEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientBFUIPrestreamUnlockMeshesEntity) == 0xA8);
}