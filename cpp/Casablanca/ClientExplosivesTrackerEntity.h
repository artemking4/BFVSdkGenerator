// Object: ClientExplosivesTrackerEntity
// ClassId: 6695
// RuntimeId: 43933
// TypeInfo: 0x0000000144CD2000
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientExplosivesTrackerEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(ClientExplosivesTrackerEntity) == 0x50);
}