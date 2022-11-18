// Object: ScenarioWaypointData
// ClassId: 5649
// RuntimeId: 57561
// TypeInfo: 0x0000000144C10E00
#include "../BattleAIShared/AbstractLocoWaypointData.h"
#include "../GameShared/PlayAnimationData.h"
#include "../Ant/AntRef.h"
#include "../BattleAIShared/ScenarioTaskData.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class ScenarioWaypointData : public BattleAIShared::AbstractLocoWaypointData {
        GameShared::PlayAnimationData PlayAnimation; // 0x48
        Ant::AntRef ScenarioAntRef; // 0x50
        char pad_0x64[0xC];
        BattleAIShared::ScenarioTaskData ScenarioTask; // 0x70
    }; // 0xD0
    static_assert(sizeof(ScenarioWaypointData) == 0xD0);
}
#pragma pack(pop)