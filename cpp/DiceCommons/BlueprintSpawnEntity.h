// Object: BlueprintSpawnEntity
// ClassId: 7845
// RuntimeId: 22310
// TypeInfo: 0x0000000144DAF920
#include "../Entity/SpatialEntity.h"

namespace DiceCommons {
    class BlueprintSpawnEntity : public Entity::SpatialEntity {
        char pad_0x30[0xD8];
    }; // 0x108
    static_assert(sizeof(BlueprintSpawnEntity) == 0x108);
}