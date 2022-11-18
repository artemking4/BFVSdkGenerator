// Object: ClientPersistenceAwardExpiredEntityData
// ClassId: 2487
// RuntimeId: 49898
// TypeInfo: 0x0000000144DA0560
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientPersistenceAwardExpiredEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ClientPersistenceAwardExpiredEntityData) == 0x28);
}
#pragma pack(pop)