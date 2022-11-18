// Object: UINewThingVehicleClassFactionOffers
// ClassId: 5326
// RuntimeId: 10275
// TypeInfo: 0x0000000144D5DBE0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUIVehicleClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleClassFactionOffers : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUIVehicleClassObject Class; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleClassFactionOffers) == 0x38);
}
#pragma pack(pop)