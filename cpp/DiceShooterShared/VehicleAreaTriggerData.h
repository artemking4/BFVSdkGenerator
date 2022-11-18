// Object: VehicleAreaTriggerData
// ClassId: 3871
// RuntimeId: 53661
// TypeInfo: 0x0000000144DF9240
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class VehicleAreaTriggerData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean UseVehicleBoundingBox; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(VehicleAreaTriggerData) == 0x28);
}
#pragma pack(pop)