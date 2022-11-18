// Object: UINewThingVehicleAppearance
// ClassId: 5319
// RuntimeId: 7633
// TypeInfo: 0x0000000144D5E2E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"
#include "../CasablancaShared/BFUIVehicleAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleAppearance : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIVehicleAppearanceInstanceObject Appearance; // 0x38
    }; // 0x40
    static_assert(sizeof(UINewThingVehicleAppearance) == 0x40);
}
#pragma pack(pop)