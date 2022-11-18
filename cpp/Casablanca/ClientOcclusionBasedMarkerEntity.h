// Object: ClientOcclusionBasedMarkerEntity
// ClassId: 7867
// RuntimeId: 23027
// TypeInfo: 0x0000000144C55320
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientOcclusionBasedMarkerEntity : public Entity::SpatialEntity {
        char pad_0x30[0xA0];
    }; // 0xD0
    static_assert(sizeof(ClientOcclusionBasedMarkerEntity) == 0xD0);
}