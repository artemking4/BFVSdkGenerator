// Object: ClientBFUIEquipAppearanceEntity
// ClassId: 6383
// RuntimeId: 55295
// TypeInfo: 0x0000000144CAAFC0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipAppearanceEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIEquipAppearanceEntity) == 0x48);
}