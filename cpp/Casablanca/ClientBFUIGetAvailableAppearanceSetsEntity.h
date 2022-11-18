// Object: ClientBFUIGetAvailableAppearanceSetsEntity
// ClassId: 6409
// RuntimeId: 18204
// TypeInfo: 0x0000000144CC6900
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableAppearanceSetsEntity : public Entity::Entity {
        char pad_0x20[0x60];
    }; // 0x80
    static_assert(sizeof(ClientBFUIGetAvailableAppearanceSetsEntity) == 0x80);
}