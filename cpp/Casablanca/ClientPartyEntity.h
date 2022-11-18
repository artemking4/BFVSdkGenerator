// Object: ClientPartyEntity
// ClassId: 6773
// RuntimeId: 51099
// TypeInfo: 0x0000000144CD51C0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPartyEntity : public Entity::Entity {
        char pad_0x20[0x1D40];
    }; // 0x1D60
    static_assert(sizeof(ClientPartyEntity) == 0x1D60);
}