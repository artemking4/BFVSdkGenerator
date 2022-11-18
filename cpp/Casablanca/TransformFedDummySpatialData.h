// Object: TransformFedDummySpatialData
// ClassId: 3452
// RuntimeId: 21084
// TypeInfo: 0x0000000144C1D000
#include "../Entity/SpatialEntityData.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Casablanca {
    class TransformFedDummySpatialData : public Entity::SpatialEntityData {
        Core::LinearTransform TransformFeed; // 0x60
    }; // 0xA0
    static_assert(sizeof(TransformFedDummySpatialData) == 0xA0);
}
#pragma pack(pop)