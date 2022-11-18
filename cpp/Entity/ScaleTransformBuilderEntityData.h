// Object: ScaleTransformBuilderEntityData
// ClassId: 3142
// RuntimeId: 57070
// TypeInfo: 0x0000000144EE4750
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Entity {
    class ScaleTransformBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 Scale; // 0x30
    }; // 0x40
    static_assert(sizeof(ScaleTransformBuilderEntityData) == 0x40);
}
#pragma pack(pop)