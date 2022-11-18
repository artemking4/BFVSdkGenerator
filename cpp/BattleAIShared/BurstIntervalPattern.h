// Object: BurstIntervalPattern
// ClassId: 1279
// RuntimeId: 62073
// TypeInfo: 0x0000000144C06BE0
#include "../Core/DataContainer.h"
#include "../BattleAIShared/BurstInterval.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BurstIntervalPattern : public Core::DataContainer {
        Array<BattleAIShared::BurstInterval> BurstInterval; // 0x18
    }; // 0x20
    static_assert(sizeof(BurstIntervalPattern) == 0x20);
}
#pragma pack(pop)