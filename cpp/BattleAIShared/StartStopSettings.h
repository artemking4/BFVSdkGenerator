// Object: StartStopSettings
// ClassId: 4912
// RuntimeId: 37761
// TypeInfo: 0x0000000144C187B0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/Pose.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class StartStopSettings : public Core::DataContainer {
        Float32 UpperRange; // 0x18
        Float32 LowerRange; // 0x1C
        Float32 IdealRange; // 0x20
        Float32 LineOfSightTime; // 0x24
        BattleAIShared::Pose StopPose; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(StartStopSettings) == 0x30);
}
#pragma pack(pop)