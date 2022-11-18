// Object: ClientUIDeploy3DEntity
// ClassId: 6936
// RuntimeId: 36968
// TypeInfo: 0x0000000144C9C0B0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDeploy3DEntity : public Entity::Entity {
        char pad_0x20[0x158];
    }; // 0x178
    static_assert(sizeof(ClientUIDeploy3DEntity) == 0x178);
}