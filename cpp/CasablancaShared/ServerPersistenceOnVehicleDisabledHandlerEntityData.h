// Object: ServerPersistenceOnVehicleDisabledHandlerEntityData
// ClassId: 3174
// RuntimeId: 7998
// TypeInfo: 0x0000000144D13C80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnVehicleDisabledHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 HotVehicleTimeout; // 0x24
    }; // 0x28
    static_assert(sizeof(ServerPersistenceOnVehicleDisabledHandlerEntityData) == 0x28);
}
#pragma pack(pop)