// Object: ClientUINPXTooltipEntity
// ClassId: 6971
// RuntimeId: 49952
// TypeInfo: 0x0000000144CB5350
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUINPXTooltipEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientUINPXTooltipEntity) == 0x48);
}