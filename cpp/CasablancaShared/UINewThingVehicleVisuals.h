// Object: UINewThingVehicleVisuals
// ClassId: 5332
// RuntimeId: 22413
// TypeInfo: 0x0000000144D5E3E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleVisuals : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleVisuals) == 0x38);
}
#pragma pack(pop)