// Object: ClientBFUIEquipAppearanceSetEntity
// ClassId: 6384
// RuntimeId: 55206
// TypeInfo: 0x0000000144CAADA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipAppearanceSetEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIEquipAppearanceSetEntity) == 0x48);
}