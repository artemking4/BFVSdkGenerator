// Object: CoverWaypointData
// ClassId: 5648
// RuntimeId: 64506
// TypeInfo: 0x0000000144C10E80
#include "../BattleAIShared/AbstractLocoWaypointData.h"
#include "../BattleAIShared/AILocoCoverTaskData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class CoverWaypointData : public BattleAIShared::AbstractLocoWaypointData {
        char pad_0x48[0x8];
        BattleAIShared::AILocoCoverTaskData CoverTask; // 0x50
    }; // 0xD0
    static_assert(sizeof(CoverWaypointData) == 0xD0);
}
#pragma pack(pop)