// Object: DifficultyIndexEntityData
// ClassId: 2642
// RuntimeId: 16087
// TypeInfo: 0x0000000144E810C0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class DifficultyIndexEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(DifficultyIndexEntityData) == 0x28);
}
#pragma pack(pop)