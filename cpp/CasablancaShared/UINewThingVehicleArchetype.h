// Object: UINewThingVehicleArchetype
// ClassId: 5324
// RuntimeId: 39510
// TypeInfo: 0x0000000144D5E0E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehicleArchetype : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingVehicleArchetype) == 0x30);
}
#pragma pack(pop)