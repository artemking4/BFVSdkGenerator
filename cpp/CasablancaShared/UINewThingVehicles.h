// Object: UINewThingVehicles
// ClassId: 5333
// RuntimeId: 54266
// TypeInfo: 0x0000000144D5E560
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIFactionObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicles : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIFactionObject Faction; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingVehicles) == 0x30);
}
#pragma pack(pop)