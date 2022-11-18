// Object: ClientBFUIGetHierarchyAppearancesEntity
// ClassId: 6427
// RuntimeId: 58710
// TypeInfo: 0x0000000144CC5C40
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetHierarchyAppearancesEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIGetHierarchyAppearancesEntity) == 0x58);
}