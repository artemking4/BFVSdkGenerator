// Object: BFUIVehicleSeatInfoEntityData
// ClassId: 2420
// RuntimeId: 24930
// TypeInfo: 0x0000000144D41550
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleSeatObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleSeatInfoEntityData : public Entity::EntityData {
        CasablancaShared::BFUIVehicleSeatObject VehicleSeat; // 0x20
        Boolean UpdateAutomatically; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIVehicleSeatInfoEntityData) == 0x30);
}
#pragma pack(pop)