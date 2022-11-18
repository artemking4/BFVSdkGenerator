// Object: BFUIGetWeaponAppearancesForSlotEntityData
// ClassId: 2275
// RuntimeId: 48327
// TypeInfo: 0x0000000144D85920
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetWeaponAppearancesForSlotEntityData : public Entity::EntityData {
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x20
        CasablancaShared::UISoldierWeaponAppearanceSlot Slot; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFUIGetWeaponAppearancesForSlotEntityData) == 0x30);
}
#pragma pack(pop)