// Object: VehicleBlueprintSelectionEntity
// ClassId: 8259
// RuntimeId: 5082
// TypeInfo: 0x0000000144C96400
#include "../Entity/Entity.h"

namespace Casablanca {
    class VehicleBlueprintSelectionEntity : public Entity::Entity {
        char pad_0x20[0x30];
    }; // 0x50
    static_assert(sizeof(VehicleBlueprintSelectionEntity) == 0x50);
}