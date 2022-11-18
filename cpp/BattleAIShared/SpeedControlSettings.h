// Object: SpeedControlSettings
// ClassId: 4901
// RuntimeId: 37651
// TypeInfo: 0x0000000144C193B0
#include "../Core/DataContainer.h"
#include "../BattleAIShared/MoveSpeed.h"
#include "../BattleAIShared/SpeedControlDistanceRange.h"
#include "../BattleAIShared/SpeedControlTargetRange.h"
#include "../BattleAIShared/SpeedControlCoverFilter.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SpeedControlSettings : public Core::DataContainer {
        BattleAIShared::MoveSpeed MoveSpeed; // 0x18
        BattleAIShared::SpeedControlDistanceRange DistanceToDestination; // 0x1C
        BattleAIShared::SpeedControlTargetRange DistanceToTarget; // 0x2C
        BattleAIShared::SpeedControlCoverFilter Cover; // 0x44
        Boolean IsPhysicsDrivenLoco; // 0x47
    }; // 0x48
    static_assert(sizeof(SpeedControlSettings) == 0x48);
}
#pragma pack(pop)