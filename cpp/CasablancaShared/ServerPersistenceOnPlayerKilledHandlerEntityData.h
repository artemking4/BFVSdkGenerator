// Object: ServerPersistenceOnPlayerKilledHandlerEntityData
// ClassId: 3170
// RuntimeId: 48929
// TypeInfo: 0x0000000144D13F00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnPlayerKilledHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 KillAssistTimeout; // 0x24
        Float32 KillAssistLimit; // 0x28
        Float32 KillAssistAsKillLimit; // 0x2C
        Float32 SaviorKillTimeout; // 0x30
        Float32 AvengerKillTimeout; // 0x34
        Float32 MultiKillTimeout; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(ServerPersistenceOnPlayerKilledHandlerEntityData) == 0x40);
}
#pragma pack(pop)