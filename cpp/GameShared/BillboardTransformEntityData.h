// Object: BillboardTransformEntityData
// ClassId: 3266
// RuntimeId: 36022
// TypeInfo: 0x0000000144E761C0
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/BillboardTransformRotationAxis.h"
#include "../Global/Boolean.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace GameShared {
    class BillboardTransformEntityData : public Entity::SpatialEntityData {
        Core::LinearTransform In; // 0x60
        Core::Realm Realm; // 0xA0
        GameShared::BillboardTransformRotationAxis RotationAxis; // 0xA4
        Boolean IgnoreTranslation; // 0xA8
        char pad_0xA9[0x7];
    }; // 0xB0
    static_assert(sizeof(BillboardTransformEntityData) == 0xB0);
}
#pragma pack(pop)