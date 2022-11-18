// Object: LandingGearLogicData
// ClassId: 4201
// RuntimeId: 42803
// TypeInfo: 0x0000000144E8D660
#include "../Core/DataContainer.h"
#include "../GameShared/LandingGearConditionData.h"

#pragma pack(push, 8)
namespace GameShared {
    class LandingGearLogicData : public Core::DataContainer {
        GameShared::LandingGearConditionData RetractCondition; // 0x18
        GameShared::LandingGearConditionData DeployCondition; // 0x24
    }; // 0x30
    static_assert(sizeof(LandingGearLogicData) == 0x30);
}
#pragma pack(pop)