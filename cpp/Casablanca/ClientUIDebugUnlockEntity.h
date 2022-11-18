// Object: ClientUIDebugUnlockEntity
// ClassId: 6935
// RuntimeId: 36884
// TypeInfo: 0x0000000144C86860
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientUIDebugUnlockEntity : public Entity::Entity {
        char pad_0x20[0x40];
    }; // 0x60
    static_assert(sizeof(ClientUIDebugUnlockEntity) == 0x60);
}