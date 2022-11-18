// Object: ServerPersistenceSquadHandlerEntityData
// ClassId: 3191
// RuntimeId: 52206
// TypeInfo: 0x0000000144D12E80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceSquadHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceSquadHandlerEntityData) == 0x28);
}
#pragma pack(pop)