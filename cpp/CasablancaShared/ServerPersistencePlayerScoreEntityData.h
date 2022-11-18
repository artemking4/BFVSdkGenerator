// Object: ServerPersistencePlayerScoreEntityData
// ClassId: 3179
// RuntimeId: 31680
// TypeInfo: 0x0000000144D12F80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistencePlayerScoreEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistencePlayerScoreEntityData) == 0x28);
}
#pragma pack(pop)