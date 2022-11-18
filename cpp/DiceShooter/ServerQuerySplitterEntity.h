// Object: ServerQuerySplitterEntity
// ClassId: 7681
// RuntimeId: 19771
// TypeInfo: 0x0000000144DD2B20
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerQuerySplitterEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ServerQuerySplitterEntity) == 0xB8);
}