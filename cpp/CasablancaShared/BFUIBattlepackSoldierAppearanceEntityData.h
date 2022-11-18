// Object: BFUIBattlepackSoldierAppearanceEntityData
// ClassId: 2155
// RuntimeId: 16864
// TypeInfo: 0x0000000144D308A0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BFSoldierGenderType.h"
#include "../CasablancaShared/BattlepackItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBattlepackSoldierAppearanceEntityData : public Entity::EntityData {
        CasablancaShared::BFSoldierGenderType ForceGender; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BattlepackItem Item; // 0x28
        Boolean Enabled; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(BFUIBattlepackSoldierAppearanceEntityData) == 0x38);
}
#pragma pack(pop)