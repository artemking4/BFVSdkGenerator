// Object: BFUIVehicleWeaponSlotObjectList
// ClassId: 5499
// RuntimeId: 29490
// TypeInfo: 0x0000000144D83F20
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleWeaponSlotObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleWeaponSlotObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleWeaponSlotObject> VehicleWeaponSlots; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleWeaponSlotObjectList) == 0x20);
}
#pragma pack(pop)