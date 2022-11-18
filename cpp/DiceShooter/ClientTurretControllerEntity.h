// Object: ClientTurretControllerEntity
// ClassId: 6908
// RuntimeId: 59981
// TypeInfo: 0x0000000144DDC730
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientTurretControllerEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientTurretControllerEntity) == 0xC0);
}