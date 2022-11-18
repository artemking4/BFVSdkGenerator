// Object: UniqueIdEntityData
// ClassId: 3852
// RuntimeId: 43991
// TypeInfo: 0x0000000144EE57D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace Entity {
    class UniqueIdEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UniqueIdEntityData) == 0x28);
}
#pragma pack(pop)