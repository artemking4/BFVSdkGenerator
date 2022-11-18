// Object: BFUITransportVehicle
// ClassId: 1260
// RuntimeId: 51539
// TypeInfo: 0x0000000144D30120
#include "../Core/DataContainer.h"
#include "../CasablancaShared/TransportVehicleType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUITransportVehicle : public Core::DataContainer {
        CasablancaShared::TransportVehicleType VehicleType; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(BFUITransportVehicle) == 0x20);
}
#pragma pack(pop)