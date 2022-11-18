// Object: ServerPersistenceRankHandlerEntityData
// ClassId: 3181
// RuntimeId: 38118
// TypeInfo: 0x0000000144D12F00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceRankHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceRankHandlerEntityData) == 0x28);
}
#pragma pack(pop)