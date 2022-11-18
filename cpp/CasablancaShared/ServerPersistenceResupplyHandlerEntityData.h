// Object: ServerPersistenceResupplyHandlerEntityData
// ClassId: 3185
// RuntimeId: 25629
// TypeInfo: 0x0000000144D13700
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceResupplyHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceResupplyHandlerEntityData) == 0x28);
}
#pragma pack(pop)