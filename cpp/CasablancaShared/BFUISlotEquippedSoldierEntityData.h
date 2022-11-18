// Object: BFUISlotEquippedSoldierEntityData
// ClassId: 2382
// RuntimeId: 42443
// TypeInfo: 0x0000000144D82F20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/UISoldierSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISlotEquippedSoldierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::UISoldierSlot Slot; // 0x30
        Boolean UpdateAutomatically; // 0x34
        char pad_0x35[0x3];
    }; // 0x38
    static_assert(sizeof(BFUISlotEquippedSoldierEntityData) == 0x38);
}
#pragma pack(pop)