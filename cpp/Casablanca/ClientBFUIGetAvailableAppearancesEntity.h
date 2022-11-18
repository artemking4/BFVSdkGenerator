// Object: ClientBFUIGetAvailableAppearancesEntity
// ClassId: 6410
// RuntimeId: 11247
// TypeInfo: 0x0000000144CAA0E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableAppearancesEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientBFUIGetAvailableAppearancesEntity) == 0xC0);
}