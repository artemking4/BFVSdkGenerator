// Object: ServerPersistenceSameSquadEntityData
// ClassId: 3188
// RuntimeId: 13361
// TypeInfo: 0x0000000144D13380
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../DicePersistenceShared/PersistenceContextObjectCollection.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceSameSquadEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::PersistenceContextObject CompareAgainst; // 0x28
        DicePersistenceShared::PersistenceContextObjectCollection Inputs; // 0x30
    }; // 0x38
    static_assert(sizeof(ServerPersistenceSameSquadEntityData) == 0x38);
}
#pragma pack(pop)