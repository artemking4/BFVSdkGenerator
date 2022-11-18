// Object: BFUIVehiclePackageSeatList
// ClassId: 1266
// RuntimeId: 1501
// TypeInfo: 0x0000000144D49A80
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIVehiclePackageSeat.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehiclePackageSeatList : public Core::DataContainer {
        Array<CasablancaShared::BFUIVehiclePackageSeat> Seats; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehiclePackageSeatList) == 0x20);
}
#pragma pack(pop)