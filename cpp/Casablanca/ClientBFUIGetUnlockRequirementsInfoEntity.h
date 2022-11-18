// Object: ClientBFUIGetUnlockRequirementsInfoEntity
// ClassId: 6463
// RuntimeId: 6335
// TypeInfo: 0x0000000144CC3AC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetUnlockRequirementsInfoEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientBFUIGetUnlockRequirementsInfoEntity) == 0x98);
}