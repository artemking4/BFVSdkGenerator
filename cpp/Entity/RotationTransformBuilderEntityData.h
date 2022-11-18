// Object: RotationTransformBuilderEntityData
// ClassId: 3135
// RuntimeId: 57712
// TypeInfo: 0x0000000144EE46D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Entity {
    class RotationTransformBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Rotation; // 0x30
    }; // 0x40
    static_assert(sizeof(RotationTransformBuilderEntityData) == 0x40);
}
#pragma pack(pop)