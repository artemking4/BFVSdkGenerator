// Object: BFUIGetVehicleWeaponSlotsEntityData
// ClassId: 2270
// RuntimeId: 55186
// TypeInfo: 0x0000000144D827A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetVehicleWeaponSlotsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Int32> SlotOrderLookup; // 0x28
        CasablancaShared::BFUIVehicleKitObject Vehicle; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIGetVehicleWeaponSlotsEntityData) == 0x38);
}
#pragma pack(pop)