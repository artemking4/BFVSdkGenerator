// Object: BFUIBattlepackWeaponAppearanceSetEntityData
// ClassId: 2158
// RuntimeId: 56467
// TypeInfo: 0x0000000144D30A20
#include "../Entity/EntityData.h"
#include "../CasablancaShared/BattlepackItem.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBattlepackWeaponAppearanceSetEntityData : public Entity::EntityData {
        CasablancaShared::BattlepackItem Item; // 0x20
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIBattlepackWeaponAppearanceSetEntityData) == 0x30);
}
#pragma pack(pop)