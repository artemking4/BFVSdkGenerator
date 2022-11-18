// Object: Vec3SplitterEntityData
// ClassId: 3863
// RuntimeId: 30388
// TypeInfo: 0x0000000144EE4B50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec3SplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(Vec3SplitterEntityData) == 0x28);
}
#pragma pack(pop)