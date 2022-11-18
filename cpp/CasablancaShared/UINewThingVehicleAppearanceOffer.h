// Object: UINewThingVehicleAppearanceOffer
// ClassId: 5320
// RuntimeId: 60122
// TypeInfo: 0x0000000144D5D9E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"
#include "../CasablancaShared/BFUIVehicleAppearanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleAppearanceOffer : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleKitObject Vehicle; // 0x28
        CasablancaShared::BFUIVehicleAppearanceObject VehicleAppearance; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleAppearanceOffer) == 0x38);
}
#pragma pack(pop)