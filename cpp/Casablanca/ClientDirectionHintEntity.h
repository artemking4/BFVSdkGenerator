// Object: ClientDirectionHintEntity
// ClassId: 6676
// RuntimeId: 19841
// TypeInfo: 0x0000000144C9CE80
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientDirectionHintEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientDirectionHintEntity) == 0x30);
}