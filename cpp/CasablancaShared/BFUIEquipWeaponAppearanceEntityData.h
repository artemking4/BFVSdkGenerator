// Object: BFUIEquipWeaponAppearanceEntityData
// ClassId: 2188
// RuntimeId: 45823
// TypeInfo: 0x0000000144D83120
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"
#include "../CasablancaShared/BFUIWeaponAppearanceInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipWeaponAppearanceEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x28
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x30
        char pad_0x34[0x4];
        CasablancaShared::BFUIWeaponAppearanceInstanceObject Appearance; // 0x38
        Boolean SaveAutomatically; // 0x40
        Boolean SaveOnDeinit; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(BFUIEquipWeaponAppearanceEntityData) == 0x48);
}
#pragma pack(pop)