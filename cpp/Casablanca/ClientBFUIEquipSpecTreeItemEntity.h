// Object: ClientBFUIEquipSpecTreeItemEntity
// ClassId: 6387
// RuntimeId: 1809
// TypeInfo: 0x0000000144C585A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIEquipSpecTreeItemEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientBFUIEquipSpecTreeItemEntity) == 0x88);
}