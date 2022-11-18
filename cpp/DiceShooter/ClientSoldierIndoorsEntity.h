// Object: ClientSoldierIndoorsEntity
// ClassId: 6860
// RuntimeId: 27953
// TypeInfo: 0x0000000144DD0C20
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientSoldierIndoorsEntity : public Entity::Entity {
        char pad_0x20[0xF8];
    }; // 0x118
    static_assert(sizeof(ClientSoldierIndoorsEntity) == 0x118);
}