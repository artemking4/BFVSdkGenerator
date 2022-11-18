// Object: ServerDakarObjectiveCompleteEntity
// ClassId: 7485
// RuntimeId: 25071
// TypeInfo: 0x0000000144C3A390
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerDakarObjectiveCompleteEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerDakarObjectiveCompleteEntity) == 0x38);
}