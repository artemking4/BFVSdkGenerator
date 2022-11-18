// Object: VehicleTypeAvailabilityEntityData
// ClassId: 3881
// RuntimeId: 50443
// TypeInfo: 0x0000000144C319F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class VehicleTypeAvailabilityEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 VehicleType; // 0x24
    }; // 0x28
    static_assert(sizeof(VehicleTypeAvailabilityEntityData) == 0x28);
}
#pragma pack(pop)