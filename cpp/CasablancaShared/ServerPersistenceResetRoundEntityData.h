// Object: ServerPersistenceResetRoundEntityData
// ClassId: 3184
// RuntimeId: 56946
// TypeInfo: 0x0000000144D13200
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceResetRoundEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceResetRoundEntityData) == 0x28);
}
#pragma pack(pop)