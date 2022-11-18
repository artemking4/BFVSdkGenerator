// Object: ClientFadeEntity
// ClassId: 6700
// RuntimeId: 33135
// TypeInfo: 0x0000000144E34DB0
#include "../Entity/Entity.h"

namespace GameClient {
    class ClientFadeEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ClientFadeEntity) == 0x78);
}