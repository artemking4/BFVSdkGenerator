// Object: BFUIGetVehicleAppearanceSlotsEntityData
// ClassId: 2264
// RuntimeId: 10354
// TypeInfo: 0x0000000144D82720
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIVehicleKitObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetVehicleAppearanceSlotsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<Int32> SlotOrderLookup; // 0x28
        CasablancaShared::BFUIVehicleKitObject Vehicle; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIGetVehicleAppearanceSlotsEntityData) == 0x38);
}
#pragma pack(pop)