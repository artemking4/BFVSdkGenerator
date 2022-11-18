// Object: SquadReinforcementInfoEntityData
// ClassId: 3506
// RuntimeId: 38825
// TypeInfo: 0x0000000144D34E30
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/SquadItemAndStateList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class SquadReinforcementInfoEntityData : public Entity::EntityData {
        Int32 Credits; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::SquadItemAndStateList ItemAndStateList; // 0x28
    }; // 0x30
    static_assert(sizeof(SquadReinforcementInfoEntityData) == 0x30);
}
#pragma pack(pop)