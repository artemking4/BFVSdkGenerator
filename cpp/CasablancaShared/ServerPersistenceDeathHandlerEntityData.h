// Object: ServerPersistenceDeathHandlerEntityData
// ClassId: 3164
// RuntimeId: 49130
// TypeInfo: 0x0000000144D13800
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceDeathHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceDeathHandlerEntityData) == 0x28);
}
#pragma pack(pop)