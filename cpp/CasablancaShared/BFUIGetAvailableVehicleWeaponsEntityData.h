// Object: BFUIGetAvailableVehicleWeaponsEntityData
// ClassId: 2213
// RuntimeId: 59253
// TypeInfo: 0x0000000144D828A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIVehicleInstanceObject.h"
#include "../CasablancaShared/UIVehicleWeaponSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetAvailableVehicleWeaponsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIVehicleInstanceObject Vehicle; // 0x28
        CasablancaShared::UIVehicleWeaponSlot Slot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUIGetAvailableVehicleWeaponsEntityData) == 0x38);
}
#pragma pack(pop)