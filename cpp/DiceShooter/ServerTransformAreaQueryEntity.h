// Object: ServerTransformAreaQueryEntity
// ClassId: 7758
// RuntimeId: 41397
// TypeInfo: 0x0000000144DD9200
#include "../Entity/Entity.h"

namespace DiceShooter {
    class ServerTransformAreaQueryEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(ServerTransformAreaQueryEntity) == 0x40);
}