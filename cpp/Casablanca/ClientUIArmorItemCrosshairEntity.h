// Object: ClientUIArmorItemCrosshairEntity
// ClassId: 6911
// RuntimeId: 64285
// TypeInfo: 0x0000000144C478F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIArmorItemCrosshairEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientUIArmorItemCrosshairEntity) == 0x78);
}