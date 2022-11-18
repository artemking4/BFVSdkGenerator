// Object: AIVehicleBehaviorEntityData
// ClassId: 2010
// RuntimeId: 50456
// TypeInfo: 0x0000000144C10C80
#include "../BattleAIShared/AIParameterEntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIVehicleBehaviorEntityData : public BattleAIShared::AIParameterEntityData {
        Boolean PreventVehicleUsage; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(AIVehicleBehaviorEntityData) == 0x30);
}
#pragma pack(pop)