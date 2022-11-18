// Object: DoorControllerEntity
// ClassId: 7982
// RuntimeId: 4930
// TypeInfo: 0x0000000144C8CA50
#include "../Entity/SpatialEntity.h"

namespace Casablanca {
    class DoorControllerEntity : public Entity::SpatialEntity {
        char pad_0x30[0x150];
    }; // 0x180
    static_assert(sizeof(DoorControllerEntity) == 0x180);
}