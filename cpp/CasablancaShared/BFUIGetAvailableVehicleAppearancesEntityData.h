// Object: BFUIGetAvailableVehicleAppearancesEntityData
// ClassId: 2212
// RuntimeId: 34791
// TypeInfo: 0x0000000144D82820
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"
#include "../CasablancaShared/BFUIVehicleAppearanceObject.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableVehicleAppearancesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIVehicleAppearanceObject Appearance; // 0x38
        Boolean IncludeUnownedObjects; // 0x40
        Boolean ListUnownedObjectsLast; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(BFUIGetAvailableVehicleAppearancesEntityData) == 0x48);
}
#pragma pack(pop)