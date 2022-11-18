// Object: ClientFlagCounterEntity
// ClassId: 6706
// RuntimeId: 13868
// TypeInfo: 0x0000000144C9E450
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientFlagCounterEntity : public Entity::Entity {
        char pad_0x20[0x88];
    }; // 0xA8
    static_assert(sizeof(ClientFlagCounterEntity) == 0xA8);
}