// Object: BFUISpawnPointInfoEntityData
// ClassId: 2398
// RuntimeId: 2932
// TypeInfo: 0x0000000144D1F0F0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISpawnPointObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISpawnPointInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUISpawnPointObject SpawnPoint; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUISpawnPointInfoEntityData) == 0x30);
}
#pragma pack(pop)