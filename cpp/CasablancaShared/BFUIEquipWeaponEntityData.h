// Object: BFUIEquipWeaponEntityData
// ClassId: 2190
// RuntimeId: 54540
// TypeInfo: 0x0000000144D833A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"
#include "../CasablancaShared/BFUIWeaponInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIEquipWeaponEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x30
        CasablancaShared::UISoldierWeaponSlot Slot; // 0x38
        char pad_0x3C[0x4];
        CasablancaShared::BFUIWeaponInstanceObject Weapon; // 0x40
        Boolean SaveAutomatically; // 0x48
        Boolean SaveOnDeinit; // 0x49
        Boolean MirrorLoadout; // 0x4A
        char pad_0x4B[0x5];
    }; // 0x50
    static_assert(sizeof(BFUIEquipWeaponEntityData) == 0x50);
}
#pragma pack(pop)