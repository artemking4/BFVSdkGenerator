// Object: BFUIBattlepackSoldierBodyEntityData
// ClassId: 2156
// RuntimeId: 30790
// TypeInfo: 0x0000000144D30820
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/BattlepackItem.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIBattlepackSoldierBodyEntityData : public Entity::EntityData {
        CasablancaShared::BattlepackItem Item; // 0x20
        Boolean Enabled; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFUIBattlepackSoldierBodyEntityData) == 0x30);
}
#pragma pack(pop)