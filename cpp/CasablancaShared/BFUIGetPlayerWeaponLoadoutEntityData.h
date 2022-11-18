// Object: BFUIGetPlayerWeaponLoadoutEntityData
// ClassId: 2239
// RuntimeId: 54016
// TypeInfo: 0x0000000144D82BA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIPlayerObject.h"
#include "../CasablancaShared/UISoldierWeaponSlot.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetPlayerWeaponLoadoutEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIPlayerObject Player; // 0x28
        CasablancaShared::UISoldierWeaponSlot SoldierWeaponSlot; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUIGetPlayerWeaponLoadoutEntityData) == 0x38);
}
#pragma pack(pop)