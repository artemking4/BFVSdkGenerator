// Object: ClientBFUIEquipAppearancesEntity
// ClassId: 6385
// RuntimeId: 9464
// TypeInfo: 0x0000000144CAAEB0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipAppearancesEntity : public Entity::Entity {
        char pad_0x20[0x38];
    }; // 0x58
    static_assert(sizeof(ClientBFUIEquipAppearancesEntity) == 0x58);
}