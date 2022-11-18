// Object: ClientBFUISpectatorOptionsWriterEntity
// ClassId: 6589
// RuntimeId: 37436
// TypeInfo: 0x0000000144C5A8A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUISpectatorOptionsWriterEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ClientBFUISpectatorOptionsWriterEntity) == 0x30);
}