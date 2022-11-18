// Object: BFUIVehicleWeaponSlotObject
// ClassId: 4138
// RuntimeId: 44910
// TypeInfo: 0x0000000144D83FA0
#include "../CasablancaShared/BFUIVehicleKitObject.h"
#include "../CasablancaShared/UIVehicleWeaponSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleWeaponSlotObject : public CasablancaShared::BFUIVehicleKitObject {
        CasablancaShared::UIVehicleWeaponSlot Slot; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(BFUIVehicleWeaponSlotObject) == 0x40);
}
#pragma pack(pop)