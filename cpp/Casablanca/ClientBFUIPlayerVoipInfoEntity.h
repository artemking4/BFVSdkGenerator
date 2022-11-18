// Object: ClientBFUIPlayerVoipInfoEntity
// ClassId: 6530
// RuntimeId: 25091
// TypeInfo: 0x0000000144CBEF10
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPlayerVoipInfoEntity : public Entity::Entity {
        char pad_0x20[0x68];
    }; // 0x88
    static_assert(sizeof(ClientBFUIPlayerVoipInfoEntity) == 0x88);
}