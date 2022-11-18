// Object: WeaponAssignerEntityData
// ClassId: 3912
// RuntimeId: 23607
// TypeInfo: 0x0000000144D65DF0
#include "../Entity/EntityData.h"
#include "../WeaponShared/WeaponSlot.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../SoldierShared/SoldierWeaponUnlockAsset.h"
#include "../CasablancaShared/UnlockAndCustomizationSocket.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class WeaponAssignerEntityData : public Entity::EntityData {
        WeaponShared::WeaponSlot WeaponSlot; // 0x20
        char pad_0x24[0x4];
        Array<WeaponShared::WeaponSlot> SlotsToClearBeforeAssigning; // 0x28
        Int32 ImplicitClassWeaponIndex; // 0x30
        char pad_0x34[0x4];
        SoldierShared::SoldierWeaponUnlockAsset SpecificWeapon; // 0x38
        Array<CasablancaShared::UnlockAndCustomizationSocket> WeaponVisualUnlocks; // 0x40
        Boolean ClearAllSlotsBeforeAssigning; // 0x48
        Boolean SetAsActiveWeapon; // 0x49
        Boolean UseClassWeaponList; // 0x4A
        Boolean CustomizeWithPlayerInventory; // 0x4B
        char pad_0x4C[0x4];
    }; // 0x50
    static_assert(sizeof(WeaponAssignerEntityData) == 0x50);
}
#pragma pack(pop)