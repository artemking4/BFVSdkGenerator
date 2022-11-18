// Object: NonGhostInteractionEntity
// ClassId: 7999
// RuntimeId: 13017
// TypeInfo: 0x0000000144C1EBA0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class NonGhostInteractionEntity : public Entity::SpatialEntity {
        char pad_0x30[0x18];
    }; // 0x48
    static_assert(sizeof(NonGhostInteractionEntity) == 0x48);
}