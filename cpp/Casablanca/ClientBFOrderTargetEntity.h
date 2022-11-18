// Object: ClientBFOrderTargetEntity
// ClassId: 7851
// RuntimeId: 16051
// TypeInfo: 0x0000000144C94A50
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientBFOrderTargetEntity : public Entity::SpatialEntity {
        char pad_0x30[0x930];
    }; // 0x960
    static_assert(sizeof(ClientBFOrderTargetEntity) == 0x960);
}