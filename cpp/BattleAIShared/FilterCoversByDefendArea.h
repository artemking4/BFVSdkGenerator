// Object: FilterCoversByDefendArea
// ClassId: 1440
// RuntimeId: 6655
// TypeInfo: 0x0000000144C062E0
#include "../BattleAIShared/CoverQuerySpatialBase.h"
#include "../BattleAIShared/CoverQueryPosition.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class FilterCoversByDefendArea : public BattleAIShared::CoverQuerySpatialBase {
        BattleAIShared::CoverQueryPosition Reference; // 0x18
        char pad_0x1C[0x4];
    }; // 0x20
    static_assert(sizeof(FilterCoversByDefendArea) == 0x20);
}
#pragma pack(pop)