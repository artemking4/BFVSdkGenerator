// Object: PropertyEventTriggerEntityData
// ClassId: 3062
// RuntimeId: 50164
// TypeInfo: 0x0000000144C82FC0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"
#include "../Core/Vec4.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Casablanca {
    class PropertyEventTriggerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Vec3In; // 0x30
        Core::Vec4 Vec4In; // 0x40
        Core::LinearTransform TransformIn; // 0x50
        Int32 IntIn; // 0x90
        Float32 FloatIn; // 0x94
        Boolean BoolIn; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(PropertyEventTriggerEntityData) == 0xA0);
}
#pragma pack(pop)