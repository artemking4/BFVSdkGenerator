// Object: ClientBFUIPadRosterListEntity
// ClassId: 6519
// RuntimeId: 12287
// TypeInfo: 0x0000000144CA67A0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIPadRosterListEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientBFUIPadRosterListEntity) == 0x68);
}