// Object: SpatialValueEntityData
// ClassId: 3446
// RuntimeId: 41878
// TypeInfo: 0x0000000144C31F70
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"
#include "../Global/Uint32.h"

#pragma pack(push, 16)
namespace Casablanca {
    class SpatialValueEntityData : public Entity::SpatialEntityData {
        Core::Vec3 Vec3Value; // 0x60
        Core::LinearTransform TransformValue; // 0x70
        Core::Realm Realm; // 0xB0
        Float32 FloatValue; // 0xB4
        Int32 IntValue; // 0xB8
        Uint32 OptionalTypeHash; // 0xBC
        Boolean BoolValue; // 0xC0
        Boolean Enabled; // 0xC1
        char pad_0xC2[0xE];
    }; // 0xD0
    static_assert(sizeof(SpatialValueEntityData) == 0xD0);
}
#pragma pack(pop)