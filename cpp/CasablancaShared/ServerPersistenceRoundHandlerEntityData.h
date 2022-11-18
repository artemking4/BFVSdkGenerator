// Object: ServerPersistenceRoundHandlerEntityData
// ClassId: 3187
// RuntimeId: 51091
// TypeInfo: 0x0000000144D13600
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceRoundHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 TimeOutputPeriodTime; // 0x24
        Uint32 ShotsOutputPeriodTime; // 0x28
        Int32 ShotsOutputMaxCapacity; // 0x2C
    }; // 0x30
    static_assert(sizeof(ServerPersistenceRoundHandlerEntityData) == 0x30);
}
#pragma pack(pop)