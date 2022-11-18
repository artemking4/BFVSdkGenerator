// Object: FilterCoversByWeaponRange
// ClassId: 1442
// RuntimeId: 15809
// TypeInfo: 0x0000000144C06560
#include "../BattleAIShared/CoverQuerySpatialBase.h"
#include "../BattleAIShared/CoverQueryPosition.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class FilterCoversByWeaponRange : public BattleAIShared::CoverQuerySpatialBase {
        BattleAIShared::CoverQueryPosition Target; // 0x18
        Float32 HeightTolerance; // 0x1C
    }; // 0x20
    static_assert(sizeof(FilterCoversByWeaponRange) == 0x20);
}
#pragma pack(pop)