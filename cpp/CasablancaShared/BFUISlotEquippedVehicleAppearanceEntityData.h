// Object: BFUISlotEquippedVehicleAppearanceEntityData
// ClassId: 2383
// RuntimeId: 22624
// TypeInfo: 0x0000000144D82520
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISlotEquippedVehicleAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleAppearanceSlot Slot; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUISlotEquippedVehicleAppearanceEntityData) == 0x38);
}
#pragma pack(pop)