// Object: BFUIVehicleAppearanceSlotObject
// ClassId: 4135
// RuntimeId: 42297
// TypeInfo: 0x0000000144D840A0
#include "../CasablancaShared/BFUIVehicleKitObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIVehicleAppearanceSlotObject : public CasablancaShared::BFUIVehicleKitObject {
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(BFUIVehicleAppearanceSlotObject) == 0x40);
}
#pragma pack(pop)