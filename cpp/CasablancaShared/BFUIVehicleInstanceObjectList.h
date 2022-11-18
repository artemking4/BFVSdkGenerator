// Object: BFUIVehicleInstanceObjectList
// ClassId: 5496
// RuntimeId: 3186
// TypeInfo: 0x0000000144D7F020
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleInstanceObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleInstanceObject> Vehicles; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleInstanceObjectList) == 0x20);
}
#pragma pack(pop)