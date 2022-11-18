// Object: ClientUIChatCommunicationEntity
// ClassId: 6919
// RuntimeId: 56000
// TypeInfo: 0x0000000144CAD030
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIChatCommunicationEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ClientUIChatCommunicationEntity) == 0x40);
}