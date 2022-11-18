// Object: ServerPersistenceSquadIdEntityData
// ClassId: 3192
// RuntimeId: 18112
// TypeInfo: 0x0000000144D13400
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceSquadIdEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::PersistenceContextObject Context; // 0x28
    }; // 0x30
    static_assert(sizeof(ServerPersistenceSquadIdEntityData) == 0x30);
}
#pragma pack(pop)