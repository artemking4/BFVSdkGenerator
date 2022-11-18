// Object: BFUISlotEquippedWeaponAppearanceEntityData
// ClassId: 2386
// RuntimeId: 3066
// TypeInfo: 0x0000000144D82DA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISlotEquippedWeaponAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUISlotEquippedWeaponAppearanceEntityData) == 0x38);
}
#pragma pack(pop)