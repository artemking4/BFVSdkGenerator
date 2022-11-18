// Object: BFUISelectSpawnPointEntityData
// ClassId: 2375
// RuntimeId: 30454
// TypeInfo: 0x0000000144D1F170
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISpawnPointObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectSpawnPointEntityData : public Entity::EntityData {
        CasablancaShared::BFUISpawnPointObject SpawnPoint; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUISelectSpawnPointEntityData) == 0x28);
}
#pragma pack(pop)