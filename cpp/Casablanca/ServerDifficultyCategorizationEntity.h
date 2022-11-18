// Object: ServerDifficultyCategorizationEntity
// ClassId: 7504
// RuntimeId: 50011
// TypeInfo: 0x0000000144CF0350
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDifficultyCategorizationEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(ServerDifficultyCategorizationEntity) == 0x48);
}