// Object: BFUIGetWeaponsForClassEntityData
// ClassId: 2278
// RuntimeId: 62693
// TypeInfo: 0x0000000144D859A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BFUISoldierClassObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetWeaponsForClassEntityData : public Entity::EntityData {
        CasablancaShared::BFUISoldierClassObject Class; // 0x20
        CasablancaShared::UISoldierWeaponSlot WeaponSlot; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(BFUIGetWeaponsForClassEntityData) == 0x30);
}
#pragma pack(pop)