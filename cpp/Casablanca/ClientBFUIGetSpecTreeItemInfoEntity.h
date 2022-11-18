// Object: ClientBFUIGetSpecTreeItemInfoEntity
// ClassId: 6450
// RuntimeId: 34930
// TypeInfo: 0x0000000144CB0F40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSpecTreeItemInfoEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientBFUIGetSpecTreeItemInfoEntity) == 0x90);
}