// Object: LogicVisualEnvironmentEntity
// ClassId: 7238
// RuntimeId: 14259
// TypeInfo: 0x0000000144E43490
#include "../Entity/Entity.h"

namespace GameClient {
    class LogicVisualEnvironmentEntity : public Entity::Entity {
        char pad_0x20[0x28];
    }; // 0x48
    static_assert(sizeof(LogicVisualEnvironmentEntity) == 0x48);
}