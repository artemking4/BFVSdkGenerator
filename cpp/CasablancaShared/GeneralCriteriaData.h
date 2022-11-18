// Object: GeneralCriteriaData
// ClassId: 831
// RuntimeId: 63116
// TypeInfo: 0x0000000144D02BA0
#include "../Entity/TreeBase.h"
#include "../CasablancaShared/CriteriaData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class GeneralCriteriaData : public Entity::TreeBase {
        Array<CasablancaShared::CriteriaData> GeneralCounters; // 0x20
    }; // 0x28
    static_assert(sizeof(GeneralCriteriaData) == 0x28);
}
#pragma pack(pop)