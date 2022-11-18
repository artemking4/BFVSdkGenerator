// Object: UINewThingVehicleOffer
// ClassId: 5328
// RuntimeId: 60571
// TypeInfo: 0x0000000144D5DB60
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleOffer : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleKitObject Vehicle; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingVehicleOffer) == 0x30);
}
#pragma pack(pop)