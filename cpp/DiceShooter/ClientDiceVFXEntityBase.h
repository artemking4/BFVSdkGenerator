// Object: ClientDiceVFXEntityBase
// ClassId: 6671
// RuntimeId: 41401
// TypeInfo: 0x0000000144DD9420
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientDiceVFXEntityBase : public Entity::Entity {
        char pad_0x20[0x110];
    }; // 0x130
    static_assert(sizeof(ClientDiceVFXEntityBase) == 0x130);
}