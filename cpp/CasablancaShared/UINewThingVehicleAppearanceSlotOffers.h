// Object: UINewThingVehicleAppearanceSlotOffers
// ClassId: 5322
// RuntimeId: 3261
// TypeInfo: 0x0000000144D5DA60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleAppearanceSlotOffers : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleKitObject Vehicle; // 0x28
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleAppearanceSlotOffers) == 0x38);
}
#pragma pack(pop)