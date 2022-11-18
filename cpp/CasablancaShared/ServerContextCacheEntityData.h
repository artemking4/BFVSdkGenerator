// Object: ServerContextCacheEntityData
// ClassId: 3158
// RuntimeId: 32670
// TypeInfo: 0x0000000144D6E530
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerContextCacheEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::PersistenceContextObject InValue; // 0x28
    }; // 0x30
    static_assert(sizeof(ServerContextCacheEntityData) == 0x30);
}
#pragma pack(pop)