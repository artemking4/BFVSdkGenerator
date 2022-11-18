// Object: ClientUITooltipEntity
// ClassId: 7016
// RuntimeId: 52248
// TypeInfo: 0x0000000144CB7160
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUITooltipEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientUITooltipEntity) == 0x30);
}