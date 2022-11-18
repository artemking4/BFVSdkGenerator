// Object: AimTransformBuilderEntityData
// ClassId: 2034
// RuntimeId: 32256
// TypeInfo: 0x0000000144D6CDB0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class AimTransformBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform BaseOffset; // 0x30
        Core::Vec3 Offset; // 0x70
        Core::LinearTransform AimFollowTransform; // 0x80
        Float32 Yaw; // 0xC0
        Float32 Pitch; // 0xC4
        Boolean UseOwnerAsFollowTransform; // 0xC8
        Boolean RunInPostAnimation; // 0xC9
        char pad_0xCA[0x6];
    }; // 0xD0
    static_assert(sizeof(AimTransformBuilderEntityData) == 0xD0);
}
#pragma pack(pop)