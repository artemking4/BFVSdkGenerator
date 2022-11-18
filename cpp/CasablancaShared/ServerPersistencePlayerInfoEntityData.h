// Object: ServerPersistencePlayerInfoEntityData
// ClassId: 3177
// RuntimeId: 56358
// TypeInfo: 0x0000000144D12C80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistencePlayerInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistencePlayerInfoEntityData) == 0x28);
}
#pragma pack(pop)