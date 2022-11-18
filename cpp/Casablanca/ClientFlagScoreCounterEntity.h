// Object: ClientFlagScoreCounterEntity
// ClassId: 6708
// RuntimeId: 18815
// TypeInfo: 0x0000000144CD61B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFlagScoreCounterEntity : public Entity::Entity {
        char pad_0x20[0xE8];
    }; // 0x108
    static_assert(sizeof(ClientFlagScoreCounterEntity) == 0x108);
}