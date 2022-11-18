// Object: BFUISelectVehicleSlotEntityData
// ClassId: 2377
// RuntimeId: 63246
// TypeInfo: 0x0000000144D829A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/UIVehicleSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectVehicleSlotEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::UIVehicleSlot VehicleSlot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUISelectVehicleSlotEntityData) == 0x38);
}
#pragma pack(pop)