// Object: Vec3BuilderEntityData
// ClassId: 3861
// RuntimeId: 20078
// TypeInfo: 0x0000000144EE4950
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec3BuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 X; // 0x24
        Float32 Y; // 0x28
        Float32 Z; // 0x2C
    }; // 0x30
    static_assert(sizeof(Vec3BuilderEntityData) == 0x30);
}
#pragma pack(pop)