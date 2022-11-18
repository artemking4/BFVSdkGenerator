// Object: ServerPersistenceOnVehicleDamagedHandlerEntityData
// ClassId: 3172
// RuntimeId: 37506
// TypeInfo: 0x0000000144D13C00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnVehicleDamagedHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 EventFlushTimeout; // 0x24
        Float32 DamageLimit; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ServerPersistenceOnVehicleDamagedHandlerEntityData) == 0x30);
}
#pragma pack(pop)