// Object: Vec2BuilderEntityData
// ClassId: 3858
// RuntimeId: 38139
// TypeInfo: 0x0000000144EE49D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec2BuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 X; // 0x24
        Float32 Y; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(Vec2BuilderEntityData) == 0x30);
}
#pragma pack(pop)