// Object: ServerPersistenceOnPlayerDamagedHandlerEntityData
// ClassId: 3167
// RuntimeId: 38445
// TypeInfo: 0x0000000144D13E80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnPlayerDamagedHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 EventFlushTimeout; // 0x24
    }; // 0x28
    static_assert(sizeof(ServerPersistenceOnPlayerDamagedHandlerEntityData) == 0x28);
}
#pragma pack(pop)