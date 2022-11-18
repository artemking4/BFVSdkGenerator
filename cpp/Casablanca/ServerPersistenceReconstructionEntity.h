// Object: ServerPersistenceReconstructionEntity
// ClassId: 7633
// RuntimeId: 55037
// TypeInfo: 0x0000000144CED1E0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerPersistenceReconstructionEntity : public Entity::Entity {
        char pad_0x20[0xD0];
    }; // 0xF0
    static_assert(sizeof(ServerPersistenceReconstructionEntity) == 0xF0);
}