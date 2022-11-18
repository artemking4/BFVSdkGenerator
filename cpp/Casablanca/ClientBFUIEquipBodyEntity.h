// Object: ClientBFUIEquipBodyEntity
// ClassId: 6386
// RuntimeId: 53408
// TypeInfo: 0x0000000144CAAC90
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipBodyEntity : public Entity::Entity {
        char pad_0x20[0x70];
    }; // 0x90
    static_assert(sizeof(ClientBFUIEquipBodyEntity) == 0x90);
}