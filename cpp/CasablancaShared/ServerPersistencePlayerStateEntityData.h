// Object: ServerPersistencePlayerStateEntityData
// ClassId: 3180
// RuntimeId: 5828
// TypeInfo: 0x0000000144D12C00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistencePlayerStateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 PlayerId; // 0x24
        DicePersistenceShared::PersistenceContextObject PlayerContext; // 0x28
    }; // 0x30
    static_assert(sizeof(ServerPersistencePlayerStateEntityData) == 0x30);
}
#pragma pack(pop)