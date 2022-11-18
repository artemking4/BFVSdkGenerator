// Object: Vec4SplitterEntityData
// ClassId: 3866
// RuntimeId: 48683
// TypeInfo: 0x0000000144EE4AD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Entity {
    class Vec4SplitterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(Vec4SplitterEntityData) == 0x28);
}
#pragma pack(pop)