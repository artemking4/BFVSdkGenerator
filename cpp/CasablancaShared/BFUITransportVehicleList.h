// Object: BFUITransportVehicleList
// ClassId: 1261
// RuntimeId: 1551
// TypeInfo: 0x0000000144D2F5B0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUITransportVehicle.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUITransportVehicleList : public Core::DataContainer {
        Array<CasablancaShared::BFUITransportVehicle> Vehicles; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUITransportVehicleList) == 0x20);
}
#pragma pack(pop)