// Object: BFUISlotEquippedWeaponEntityData
// ClassId: 2387
// RuntimeId: 44405
// TypeInfo: 0x0000000144D82EA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISlotEquippedWeaponEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::UISoldierWeaponSlot Slot; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUISlotEquippedWeaponEntityData) == 0x38);
}
#pragma pack(pop)