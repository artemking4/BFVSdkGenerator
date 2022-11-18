// Object: ServerPersistenceOrderHandlerEntityData
// ClassId: 3176
// RuntimeId: 30970
// TypeInfo: 0x0000000144D13A00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOrderHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceOrderHandlerEntityData) == 0x28);
}
#pragma pack(pop)