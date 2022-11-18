// Object: BFUIFilterVehicleSeatListEntityData
// ClassId: 2206
// RuntimeId: 26236
// TypeInfo: 0x0000000144D4BEF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIVehiclePackageSeatList.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIFilterVehicleSeatListEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehiclePackageSeatList SeatList; // 0x28
        Boolean ExcludeEmptySeats; // 0x30
        Boolean ExcludeWeapons; // 0x31
        Boolean ExcludeEquipments; // 0x32
        Boolean ExcludeUpgrades; // 0x33
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUIFilterVehicleSeatListEntityData) == 0x38);
}
#pragma pack(pop)