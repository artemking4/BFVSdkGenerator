// Object: Vec2SplitterEntityData
// ClassId: 3860
// RuntimeId: 11480
// TypeInfo: 0x0000000144EE4BD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec2SplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(Vec2SplitterEntityData) == 0x28);
}
#pragma pack(pop)