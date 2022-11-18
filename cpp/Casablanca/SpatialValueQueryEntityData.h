// Object: SpatialValueQueryEntityData
// ClassId: 3485
// RuntimeId: 21299
// TypeInfo: 0x0000000144C31EF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SpatialValueQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform QueryTransform; // 0x30
        Float32 WithinRangeThreshold; // 0x70
        Uint32 OptionalTypeHash; // 0x74
        Boolean EnableContinuousQuery; // 0x78
        char pad_0x79[0x7];
    }; // 0x80
    static_assert(sizeof(SpatialValueQueryEntityData) == 0x80);
}
#pragma pack(pop)