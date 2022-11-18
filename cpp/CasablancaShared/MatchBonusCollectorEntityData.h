// Object: MatchBonusCollectorEntityData
// ClassId: 2878
// RuntimeId: 59623
// TypeInfo: 0x0000000144D14100
#include "../Entity/EntityData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MatchBonusCollectorEntityData : public Entity::EntityData {
        Int32 OutcomeTeam1; // 0x20
        Int32 OutcomeTeam2; // 0x24
    }; // 0x28
    static_assert(sizeof(MatchBonusCollectorEntityData) == 0x28);
}
#pragma pack(pop)