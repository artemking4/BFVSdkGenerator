// Object: BFUIVehicleAppearanceSlotObjectList
// ClassId: 5494
// RuntimeId: 51559
// TypeInfo: 0x0000000144D7EE20
#include "../CasablancaShared/UIObjectList.h"
#include "../CasablancaShared/BFUIVehicleAppearanceSlotObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceSlotObjectList : public CasablancaShared::UIObjectList {
        Array<CasablancaShared::BFUIVehicleAppearanceSlotObject> VehicleAppearanceSlots; // 0x18
    }; // 0x20
    static_assert(sizeof(BFUIVehicleAppearanceSlotObjectList) == 0x20);
}
#pragma pack(pop)