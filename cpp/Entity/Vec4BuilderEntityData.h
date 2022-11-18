// Object: Vec4BuilderEntityData
// ClassId: 3864
// RuntimeId: 64535
// TypeInfo: 0x0000000144EE48D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec4BuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 X; // 0x24
        Float32 Y; // 0x28
        Float32 Z; // 0x2C
        Float32 W; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(Vec4BuilderEntityData) == 0x38);
}
#pragma pack(pop)