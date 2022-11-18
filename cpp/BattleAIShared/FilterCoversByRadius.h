// Object: FilterCoversByRadius
// ClassId: 1441
// RuntimeId: 54347
// TypeInfo: 0x0000000144C059E0
#include "../BattleAIShared/CoverQuerySpatialBase.h"
#include "../BattleAIShared/CoverQueryPosition.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class FilterCoversByRadius : public BattleAIShared::CoverQuerySpatialBase {
        BattleAIShared::CoverQueryPosition Center; // 0x18
        Float32 Radius; // 0x1C
        Float32 HeightTolerance; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(FilterCoversByRadius) == 0x28);
}
#pragma pack(pop)