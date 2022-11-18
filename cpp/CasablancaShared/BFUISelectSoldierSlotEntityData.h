// Object: BFUISelectSoldierSlotEntityData
// ClassId: 2374
// RuntimeId: 29520
// TypeInfo: 0x0000000144D839A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/UISoldierSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectSoldierSlotEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::UISoldierSlot SoldierSlot; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(BFUISelectSoldierSlotEntityData) == 0x38);
}
#pragma pack(pop)