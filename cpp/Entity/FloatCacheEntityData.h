// Object: FloatCacheEntityData
// ClassId: 2748
// RuntimeId: 13871
// TypeInfo: 0x0000000144EE31D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Entity {
    class FloatCacheEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 InValue; // 0x24
    }; // 0x28
    static_assert(sizeof(FloatCacheEntityData) == 0x28);
}
#pragma pack(pop)