// Object: ServerReportProgressEntity
// ClassId: 7697
// RuntimeId: 51493
// TypeInfo: 0x0000000144CEB170
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerReportProgressEntity : public Entity::Entity {
        char pad_0x20[0x10];
    }; // 0x30
    static_assert(sizeof(ServerReportProgressEntity) == 0x30);
}