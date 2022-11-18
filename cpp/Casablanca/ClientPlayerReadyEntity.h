// Object: ClientPlayerReadyEntity
// ClassId: 6808
// RuntimeId: 53360
// TypeInfo: 0x0000000144CD8330
#include "../Entity/Entity.h"

namespace Casablanca {
    class ClientPlayerReadyEntity : public Entity::Entity {
        char pad_0x20[0x48];
    }; // 0x68
    static_assert(sizeof(ClientPlayerReadyEntity) == 0x68);
}