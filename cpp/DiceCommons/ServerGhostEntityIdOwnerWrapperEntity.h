// Object: ServerGhostEntityIdOwnerWrapperEntity
// ClassId: 7568
// RuntimeId: 31411
// TypeInfo: 0x0000000144DAA170
#include "../Entity/Entity.h"

namespace DiceCommons {
    class ServerGhostEntityIdOwnerWrapperEntity : public Entity::Entity {
        char pad_0x20[0x8];
    }; // 0x28
    static_assert(sizeof(ServerGhostEntityIdOwnerWrapperEntity) == 0x28);
}