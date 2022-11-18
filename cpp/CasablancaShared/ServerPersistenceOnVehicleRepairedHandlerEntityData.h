// Object: ServerPersistenceOnVehicleRepairedHandlerEntityData
// ClassId: 3175
// RuntimeId: 13228
// TypeInfo: 0x0000000144D13B80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnVehicleRepairedHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 RepairVehicleLimit; // 0x24
    }; // 0x28
    static_assert(sizeof(ServerPersistenceOnVehicleRepairedHandlerEntityData) == 0x28);
}
#pragma pack(pop)