// Object: ClientBFUICapturePointFilterEntity
// ClassId: 6371
// RuntimeId: 1473
// TypeInfo: 0x0000000144C86310
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUICapturePointFilterEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUICapturePointFilterEntity) == 0x58);
}