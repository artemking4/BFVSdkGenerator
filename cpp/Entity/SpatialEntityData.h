// Object: SpatialEntityData
// ClassId: 3248
// RuntimeId: 27324
// TypeInfo: 0x0000000144ED75F0
#include "../Entity/EntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Entity {
    class SpatialEntityData : public Entity::EntityData {
        Core::LinearTransform Transform; // 0x20
    }; // 0x60
    static_assert(sizeof(SpatialEntityData) == 0x60);
}
#pragma pack(pop)