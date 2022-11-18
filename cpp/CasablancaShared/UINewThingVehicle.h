// Object: UINewThingVehicle
// ClassId: 5318
// RuntimeId: 52784
// TypeInfo: 0x0000000144D5E460
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicle : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingVehicle) == 0x38);
}
#pragma pack(pop)