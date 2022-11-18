// Object: UINewThingVehicleArchetypes
// ClassId: 5325
// RuntimeId: 28852
// TypeInfo: 0x0000000144D5E160
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleArchetypes : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleArchetypes) == 0x38);
}
#pragma pack(pop)