// Object: ClientUICombatAreaStateEntity
// ClassId: 6921
// RuntimeId: 2712
// TypeInfo: 0x0000000144C9C3E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUICombatAreaStateEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ClientUICombatAreaStateEntity) == 0x70);
}