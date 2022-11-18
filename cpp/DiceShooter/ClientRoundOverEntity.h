// Object: ClientRoundOverEntity
// ClassId: 6845
// RuntimeId: 50486
// TypeInfo: 0x0000000144DDCEA0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientRoundOverEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(ClientRoundOverEntity) == 0xC0);
}