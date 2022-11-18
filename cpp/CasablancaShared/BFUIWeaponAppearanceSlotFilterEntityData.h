// Object: BFUIWeaponAppearanceSlotFilterEntityData
// ClassId: 2205
// RuntimeId: 8840
// TypeInfo: 0x0000000144D816A0
#include "../CasablancaShared/BFUIFilterEntityBaseData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/UISoldierWeaponAppearanceSlot.h"
#include "../CasablancaShared/BFUIWeaponAppearanceSlotObjectList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIWeaponAppearanceSlotFilterEntityData : public CasablancaShared::BFUIFilterEntityBaseData {
        Core::Realm Realm; // 0x28
        char pad_0x2C[0x4];
        Array<CasablancaShared::UISoldierWeaponAppearanceSlot> IncludeSoldierWeaponAppearanceSlots; // 0x30
        Array<CasablancaShared::UISoldierWeaponAppearanceSlot> ExcludeSoldierWeaponAppearanceSlots; // 0x38
        CasablancaShared::BFUIWeaponAppearanceSlotObjectList In; // 0x40
    }; // 0x48
    static_assert(sizeof(BFUIWeaponAppearanceSlotFilterEntityData) == 0x48);
}
#pragma pack(pop)