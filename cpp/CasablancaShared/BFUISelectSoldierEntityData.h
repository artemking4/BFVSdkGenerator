// Object: BFUISelectSoldierEntityData
// ClassId: 2373
// RuntimeId: 2837
// TypeInfo: 0x0000000144D83A20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFUISoldierInstanceObject.h"
#include "../CasablancaShared/BFUIFactionObject.h"
#include "../CasablancaShared/UISoldierSlot.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISelectSoldierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISoldierInstanceObject Soldier; // 0x28
        CasablancaShared::BFUIFactionObject Faction; // 0x30
        CasablancaShared::UISoldierSlot Slot; // 0x38
        Boolean SaveAutomatically; // 0x3C
        Boolean SaveOnDeinit; // 0x3D
        char pad_0x3E[0x2];
    }; // 0x40
    static_assert(sizeof(BFUISelectSoldierEntityData) == 0x40);
}
#pragma pack(pop)