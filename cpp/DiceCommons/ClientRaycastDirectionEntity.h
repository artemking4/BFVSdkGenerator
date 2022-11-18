// Object: ClientRaycastDirectionEntity
// ClassId: 6833
// RuntimeId: 28578
// TypeInfo: 0x0000000144DAF0A0
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ClientRaycastDirectionEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ClientRaycastDirectionEntity) == 0xF0);
}