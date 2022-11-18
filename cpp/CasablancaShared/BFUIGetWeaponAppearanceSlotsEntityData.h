// Object: BFUIGetWeaponAppearanceSlotsEntityData
// ClassId: 2274
// RuntimeId: 51294
// TypeInfo: 0x0000000144D83420
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIWeaponObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetWeaponAppearanceSlotsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Int32> SlotOrderLookup; // 0x28
        CasablancaShared::BFUIWeaponObject Weapon; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIGetWeaponAppearanceSlotsEntityData) == 0x38);
}
#pragma pack(pop)