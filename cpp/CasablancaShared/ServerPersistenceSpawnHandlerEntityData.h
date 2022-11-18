// Object: ServerPersistenceSpawnHandlerEntityData
// ClassId: 3189
// RuntimeId: 32693
// TypeInfo: 0x0000000144D13580
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceSpawnHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceSpawnHandlerEntityData) == 0x28);
}
#pragma pack(pop)