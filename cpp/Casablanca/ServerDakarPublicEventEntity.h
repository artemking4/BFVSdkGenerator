// Object: ServerDakarPublicEventEntity
// ClassId: 8015
// RuntimeId: 58963
// TypeInfo: 0x0000000144C395C0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerDakarPublicEventEntity : public Entity::SpatialEntity {
        char pad_0x30[0x48];
    }; // 0x78
    static_assert(sizeof(ServerDakarPublicEventEntity) == 0x78);
}