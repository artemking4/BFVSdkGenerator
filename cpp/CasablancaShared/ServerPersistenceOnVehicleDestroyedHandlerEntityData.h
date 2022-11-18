// Object: ServerPersistenceOnVehicleDestroyedHandlerEntityData
// ClassId: 3173
// RuntimeId: 64560
// TypeInfo: 0x0000000144D13D00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnVehicleDestroyedHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 HotVehicleTimeout; // 0x24
    }; // 0x28
    static_assert(sizeof(ServerPersistenceOnVehicleDestroyedHandlerEntityData) == 0x28);
}
#pragma pack(pop)