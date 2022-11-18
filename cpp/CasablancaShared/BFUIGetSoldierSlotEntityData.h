// Object: BFUIGetSoldierSlotEntityData
// ClassId: 2247
// RuntimeId: 51289
// TypeInfo: 0x0000000144D83AA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSoldierSlotEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUIFactionObject Faction; // 0x28
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIGetSoldierSlotEntityData) == 0x38);
}
#pragma pack(pop)