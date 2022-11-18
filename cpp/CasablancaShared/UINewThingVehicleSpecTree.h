// Object: UINewThingVehicleSpecTree
// ClassId: 5330
// RuntimeId: 10733
// TypeInfo: 0x0000000144D5E260
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleSpecTree : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleSpecTree) == 0x38);
}
#pragma pack(pop)