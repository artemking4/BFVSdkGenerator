// Object: BFUIBattlepackWeaponItemEntityData
// ClassId: 2159
// RuntimeId: 31533
// TypeInfo: 0x0000000144D309A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BattlepackItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBattlepackWeaponItemEntityData : public Entity::EntityData {
        CasablancaShared::BattlepackItem Item; // 0x20
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIBattlepackWeaponItemEntityData) == 0x30);
}
#pragma pack(pop)