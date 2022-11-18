// Object: FiringIntervalPattern
// ClassId: 1623
// RuntimeId: 55470
// TypeInfo: 0x0000000144C05FE0
#include "../Core/DataContainer.h"
#include "../BattleAIShared/Interval.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class FiringIntervalPattern : public Core::DataContainer {
        Array<BattleAIShared::Interval> Interval; // 0x18
    }; // 0x20
    static_assert(sizeof(FiringIntervalPattern) == 0x20);
}
#pragma pack(pop)