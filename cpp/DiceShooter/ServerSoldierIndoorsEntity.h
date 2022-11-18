// Object: ServerSoldierIndoorsEntity
// ClassId: 7713
// RuntimeId: 50358
// TypeInfo: 0x0000000144DD0A00
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerSoldierIndoorsEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ServerSoldierIndoorsEntity) == 0x88);
}