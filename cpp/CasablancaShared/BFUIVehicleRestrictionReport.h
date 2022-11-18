// Object: BFUIVehicleRestrictionReport
// ClassId: 1268
// RuntimeId: 30121
// TypeInfo: 0x0000000144D4C070
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIVehicleRestrictionInfo.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleRestrictionReport : public Core::DataContainer {
        Array<CasablancaShared::BFUIVehicleRestrictionInfo> VehicleRestrictionReport; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleRestrictionReport) == 0x20);
}
#pragma pack(pop)