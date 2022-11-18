// Object: ScoringData
// ClassId: 836
// RuntimeId: 11542
// TypeInfo: 0x0000000144DCA740
#include "../Entity/TreeBase.h"
#include "../DicePersistenceShared/ScoringTypeData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class ScoringData : public Entity::TreeBase {
        Array<DicePersistenceShared::ScoringTypeData> ScoringTypes; // 0x20
    }; // 0x28
    static_assert(sizeof(ScoringData) == 0x28);
}
#pragma pack(pop)