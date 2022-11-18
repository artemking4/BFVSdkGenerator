// Object: ClientBFUICapturePointInfoEntity
// ClassId: 6372
// RuntimeId: 43678
// TypeInfo: 0x0000000144C86200
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICapturePointInfoEntity : public Entity::Entity {
        char pad_0x20[0xB0];
    }; // 0xD0
    static_assert(sizeof(ClientBFUICapturePointInfoEntity) == 0xD0);
}