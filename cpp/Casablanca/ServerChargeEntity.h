// Object: ServerChargeEntity
// ClassId: 7462
// RuntimeId: 18067
// TypeInfo: 0x0000000144C3C1E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerChargeEntity : public Entity::Entity {
        char pad_0x20[0x98];
    }; // 0xB8
    static_assert(sizeof(ServerChargeEntity) == 0xB8);
}