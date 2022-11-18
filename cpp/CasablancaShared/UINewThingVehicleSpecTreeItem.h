// Object: UINewThingVehicleSpecTreeItem
// ClassId: 5331
// RuntimeId: 32678
// TypeInfo: 0x0000000144D5E1E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleSpecTreeItem : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::BFUISpecTreeItemInstanceObject Item; // 0x30
    }; // 0x38
    static_assert(sizeof(UINewThingVehicleSpecTreeItem) == 0x38);
}
#pragma pack(pop)