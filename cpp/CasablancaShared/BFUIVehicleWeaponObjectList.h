// Object: BFUIVehicleWeaponObjectList
// ClassId: 5498
// RuntimeId: 29047
// TypeInfo: 0x0000000144D84020
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleWeaponObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleWeaponObject> Weapons; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleWeaponObjectList) == 0x20);
}
#pragma pack(pop)