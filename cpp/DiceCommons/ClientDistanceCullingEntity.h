// Object: ClientDistanceCullingEntity
// ClassId: 7858
// RuntimeId: 22652
// TypeInfo: 0x0000000144DAF2C0
#include "../Entity/SpatialEntity.h"

namespace DiceCommons {
    class ClientDistanceCullingEntity : public Entity::SpatialEntity {
        char pad_0x30[0x40];
    }; // 0x70
    static_assert(sizeof(ClientDistanceCullingEntity) == 0x70);
}