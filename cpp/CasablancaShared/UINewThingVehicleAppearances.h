// Object: UINewThingVehicleAppearances
// ClassId: 5323
// RuntimeId: 52321
// TypeInfo: 0x0000000144D5E360
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleAppearances : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleAppearances) == 0x38);
}
#pragma pack(pop)