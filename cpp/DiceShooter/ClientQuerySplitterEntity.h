// Object: ClientQuerySplitterEntity
// ClassId: 6830
// RuntimeId: 45222
// TypeInfo: 0x0000000144DDACC0
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ClientQuerySplitterEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ClientQuerySplitterEntity) == 0xB8);
}