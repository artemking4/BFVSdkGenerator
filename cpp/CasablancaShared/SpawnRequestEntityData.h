// Object: SpawnRequestEntityData
// ClassId: 3488
// RuntimeId: 54640
// TypeInfo: 0x0000000144D359B0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SpawnRequestEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(SpawnRequestEntityData) == 0x28);
}
#pragma pack(pop)