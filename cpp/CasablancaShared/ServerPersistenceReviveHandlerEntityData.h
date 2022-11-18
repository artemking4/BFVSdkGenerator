// Object: ServerPersistenceReviveHandlerEntityData
// ClassId: 3186
// RuntimeId: 30149
// TypeInfo: 0x0000000144D13780
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceReviveHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceReviveHandlerEntityData) == 0x28);
}
#pragma pack(pop)