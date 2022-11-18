// Object: BFUIPracticeRangeScoreboardEntityData
// ClassId: 2346
// RuntimeId: 48481
// TypeInfo: 0x0000000144D861A0
#include "../Entity/EntityData.h"
#include "../CasablancaShared/PracticeRangeScoreboardRowBaseConfig.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPracticeRangeScoreboardEntityData : public Entity::EntityData {
        Array<CasablancaShared::PracticeRangeScoreboardRowBaseConfig> PracticeRangeScoreboardConfig; // 0x20
    }; // 0x28
    static_assert(sizeof(BFUIPracticeRangeScoreboardEntityData) == 0x28);
}
#pragma pack(pop)