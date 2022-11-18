// Object: ClientRaycastEntity
// ClassId: 6834
// RuntimeId: 24335
// TypeInfo: 0x0000000144DDABB0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientRaycastEntity : public Entity::Entity {
        char pad_0x20[0x150];
    }; // 0x170
    static_assert(sizeof(ClientRaycastEntity) == 0x170);
}