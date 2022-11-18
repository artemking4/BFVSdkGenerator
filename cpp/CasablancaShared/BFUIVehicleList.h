// Object: BFUIVehicleList
// ClassId: 1263
// RuntimeId: 54553
// TypeInfo: 0x0000000144D416D0
#include "../Core/DataContainer.h"
#include "../CasablancaShared/BFUIVehicleObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleList : public Core::DataContainer {
        Array<CasablancaShared::BFUIVehicleObject> Vehicles; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleList) == 0x20);
}
#pragma pack(pop)