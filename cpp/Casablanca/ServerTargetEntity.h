// Object: ServerTargetEntity
// ClassId: 8044
// RuntimeId: 24855
// TypeInfo: 0x0000000144C20DC0
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ServerTargetEntity : public Entity::SpatialEntity {
        char pad_0x30[0x30];
    }; // 0x60
    static_assert(sizeof(ServerTargetEntity) == 0x60);
}