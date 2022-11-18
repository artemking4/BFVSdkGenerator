// Object: ClientUIKillCardEntity
// ClassId: 6959
// RuntimeId: 7578
// TypeInfo: 0x0000000144CB2840
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIKillCardEntity : public Entity::Entity {
        char pad_0x20[0x220];
    }; // 0x240
    static_assert(sizeof(ClientUIKillCardEntity) == 0x240);
}