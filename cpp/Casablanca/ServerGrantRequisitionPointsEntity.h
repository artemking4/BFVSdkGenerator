// Object: ServerGrantRequisitionPointsEntity
// ClassId: 7570
// RuntimeId: 6536
// TypeInfo: 0x0000000144CE6CA0
#include "../Entity/Entity.h"

namespace Casablanca {
    class ServerGrantRequisitionPointsEntity : public Entity::Entity {
        char pad_0x20[0x58];
    }; // 0x78
    static_assert(sizeof(ServerGrantRequisitionPointsEntity) == 0x78);
}