// Object: WeaponTransformProviderData
// ClassId: 3917
// RuntimeId: 11048
// TypeInfo: 0x0000000144F7A0E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace WeaponShared {
    class WeaponTransformProviderData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform BaseOffset; // 0x30
        Core::Vec3 Offset; // 0x70
        Core::Vec3 FinalOffset; // 0x80
        Float32 Yaw; // 0x90
        Float32 Pitch; // 0x94
        Boolean IsPredicted; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(WeaponTransformProviderData) == 0xA0);
}
#pragma pack(pop)