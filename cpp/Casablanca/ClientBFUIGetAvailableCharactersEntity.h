// Object: ClientBFUIGetAvailableCharactersEntity
// ClassId: 6412
// RuntimeId: 21707
// TypeInfo: 0x0000000144CC66E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetAvailableCharactersEntity : public Entity::Entity {
        char pad_0x20[0x78];
    }; // 0x98
    static_assert(sizeof(ClientBFUIGetAvailableCharactersEntity) == 0x98);
}