// Object: SprintSettings
// ClassId: 4903
// RuntimeId: 47351
// TypeInfo: 0x0000000144C194B0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class SprintSettings : public Core::DataContainer {
        Float32 StartSprintingThreshold; // 0x18
        Float32 StopSprintingThreshold; // 0x1C
        Float32 StopSprintingDistanceToTarget; // 0x20
        Float32 StartSprintingDistanceToTarget; // 0x24
    }; // 0x28
    static_assert(sizeof(SprintSettings) == 0x28);
}
#pragma pack(pop)