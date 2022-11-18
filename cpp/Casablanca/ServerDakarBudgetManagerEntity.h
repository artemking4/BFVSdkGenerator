// Object: ServerDakarBudgetManagerEntity
// ClassId: 7481
// RuntimeId: 10459
// TypeInfo: 0x0000000144CDE700
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarBudgetManagerEntity : public Entity::Entity {
        char pad_0x20[0x50];
    }; // 0x70
    static_assert(sizeof(ServerDakarBudgetManagerEntity) == 0x70);
}