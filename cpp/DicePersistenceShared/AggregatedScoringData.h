// Object: AggregatedScoringData
// ClassId: 144
// RuntimeId: 37636
// TypeInfo: 0x0000000144DCA6C0
#include "../Core/Asset.h"
#include "../DicePersistenceShared/ScoringData.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class AggregatedScoringData : public Core::Asset {
        Array<DicePersistenceShared::ScoringData> Scorings; // 0x20
    }; // 0x28
    static_assert(sizeof(AggregatedScoringData) == 0x28);
}
#pragma pack(pop)