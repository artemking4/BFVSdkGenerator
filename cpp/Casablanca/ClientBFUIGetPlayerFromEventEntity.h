// Object: ClientBFUIGetPlayerFromEventEntity
// ClassId: 6435
// RuntimeId: 20955
// TypeInfo: 0x0000000144CBC430
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientBFUIGetPlayerFromEventEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ClientBFUIGetPlayerFromEventEntity) == 0x48);
}