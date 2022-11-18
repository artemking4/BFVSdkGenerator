// Object: ClientSyncedFloatArrayEntity
// ClassId: 6884
// RuntimeId: 29850
// TypeInfo: 0x0000000144CD7340
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientSyncedFloatArrayEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientSyncedFloatArrayEntity) == 0x68);
}