// Object: ClientLocalInteractionEntity
// ClassId: 7861
// RuntimeId: 59823
// TypeInfo: 0x0000000144C55650
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class ClientLocalInteractionEntity : public Entity::SpatialEntity {
        char pad_0x30[0x150];
    }; // 0x180
    static_assert(sizeof(ClientLocalInteractionEntity) == 0x180);
}