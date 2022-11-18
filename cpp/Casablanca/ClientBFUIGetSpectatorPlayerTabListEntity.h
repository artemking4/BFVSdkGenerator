// Object: ClientBFUIGetSpectatorPlayerTabListEntity
// ClassId: 6453
// RuntimeId: 13663
// TypeInfo: 0x0000000144CCC2F0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetSpectatorPlayerTabListEntity : public Entity::Entity {
        char pad_0x20[0x90];
    }; // 0xB0
    static_assert(sizeof(ClientBFUIGetSpectatorPlayerTabListEntity) == 0xB0);
}