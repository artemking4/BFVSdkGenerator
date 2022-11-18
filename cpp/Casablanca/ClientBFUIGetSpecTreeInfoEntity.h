// Object: ClientBFUIGetSpecTreeInfoEntity
// ClassId: 6449
// RuntimeId: 60895
// TypeInfo: 0x0000000144C58490
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSpecTreeInfoEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientBFUIGetSpecTreeInfoEntity) == 0x78);
}