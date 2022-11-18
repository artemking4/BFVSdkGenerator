// Object: ClientAimingConstraint
// ClassId: 6315
// RuntimeId: 35741
// TypeInfo: 0x0000000144DCE5C0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientAimingConstraint : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientAimingConstraint) == 0xA8);
}