// Object: Vector3EntityData
// ClassId: 3869
// RuntimeId: 39374
// TypeInfo: 0x0000000144EE3350
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Entity {
    class Vector3EntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::Vec3 DefaultVec3; // 0x30
    }; // 0x40
    static_assert(sizeof(Vector3EntityData) == 0x40);
}
#pragma pack(pop)