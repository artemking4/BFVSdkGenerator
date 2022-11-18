// Object: ServerAnimationEnumerationChoiceEntity
// ClassId: 7439
// RuntimeId: 12571
// TypeInfo: 0x0000000144E5EE90
#include "../Entity/Entity.h"

namespace GameServer {
    class ServerAnimationEnumerationChoiceEntity : public Entity::Entity {
        char pad_0x20[0x18];
    }; // 0x38
    static_assert(sizeof(ServerAnimationEnumerationChoiceEntity) == 0x38);
}