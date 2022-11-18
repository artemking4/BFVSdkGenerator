// Object: ClientBFUIFrontendEmblemEntity
// ClassId: 6408
// RuntimeId: 16177
// TypeInfo: 0x0000000144CAA1F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIFrontendEmblemEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientBFUIFrontendEmblemEntity) == 0x40);
}