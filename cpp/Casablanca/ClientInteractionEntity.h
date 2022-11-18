// Object: ClientInteractionEntity
// ClassId: 7859
// RuntimeId: 56783
// TypeInfo: 0x0000000144CD1780
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientInteractionEntity : public Entity::SpatialEntity {
        char pad_0x30[0x240];
    }; // 0x270
    static_assert(sizeof(ClientInteractionEntity) == 0x270);
}