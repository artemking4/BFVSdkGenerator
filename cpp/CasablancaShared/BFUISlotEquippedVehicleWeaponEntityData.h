// Object: BFUISlotEquippedVehicleWeaponEntityData
// ClassId: 2385
// RuntimeId: 16972
// TypeInfo: 0x0000000144D825A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleWeaponSlot.h"
#include "../CasablancaShared/BFUISpecTreeItemInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISlotEquippedVehicleWeaponEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleWeaponSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUISpecTreeItemInstanceObject PreviewSpecTreeItem; // 0x38
        Boolean UpdateAutomatically; // 0x40
        Boolean PreviewSpecTreeItemEnabled; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(BFUISlotEquippedVehicleWeaponEntityData) == 0x48);
}
#pragma pack(pop)