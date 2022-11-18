// Object: ServerPersistenceOnPlayerHealedHandlerEntityData
// ClassId: 3169
// RuntimeId: 14329
// TypeInfo: 0x0000000144D13E00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnPlayerHealedHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 HealingLimit; // 0x24
        Float32 EventFlushTimeout; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ServerPersistenceOnPlayerHealedHandlerEntityData) == 0x30);
}
#pragma pack(pop)