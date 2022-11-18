// Object: ServerPersistenceOnVehicleAssistHandlerEntityData
// ClassId: 3171
// RuntimeId: 65001
// TypeInfo: 0x0000000144D13500
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceOnVehicleAssistHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(ServerPersistenceOnVehicleAssistHandlerEntityData) == 0x28);
}
#pragma pack(pop)