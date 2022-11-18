// Object: UINewThingVehiclesByClass
// ClassId: 5334
// RuntimeId: 45363
// TypeInfo: 0x0000000144D5E4E0
#include "../CasablancaShared/UINewThingAsset.h"
#include "../CasablancaShared/BFUIVehicleClassObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINewThingVehiclesByClass : public CasablancaShared::UINewThingAsset {
        CasablancaShared::BFUIVehicleClassObject Class; // 0x28
    }; // 0x30
    static_assert(sizeof(UINewThingVehiclesByClass) == 0x30);
}
#pragma pack(pop)