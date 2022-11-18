// Object: BFUISlotEquippedVehicleEntityData
// ClassId: 2384
// RuntimeId: 59708
// TypeInfo: 0x0000000144D82620
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/UIVehicleSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISlotEquippedVehicleEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::UIVehicleSlot Slot; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUISlotEquippedVehicleEntityData) == 0x38);
}
#pragma pack(pop)