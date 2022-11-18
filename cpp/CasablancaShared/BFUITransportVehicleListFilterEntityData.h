// Object: BFUITransportVehicleListFilterEntityData
// ClassId: 2411
// RuntimeId: 1369
// TypeInfo: 0x0000000144D30020
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/TransportVehicleType.h"
#include "../CasablancaShared/BFUITransportVehicleList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUITransportVehicleListFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::TransportVehicleType> AvailableFilter; // 0x28
        CasablancaShared::BFUITransportVehicleList VehicleList; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUITransportVehicleListFilterEntityData) == 0x38);
}
#pragma pack(pop)