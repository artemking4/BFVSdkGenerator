// Object: AIVehicleTactic
// ClassId: 414
// RuntimeId: 39235
// TypeInfo: 0x0000000144C12380
#include "../BattleAIShared/TacticBase.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIVehicleTactic : public BattleAIShared::TacticBase {
        Float32 DistanceToVehicle; // 0x28
        Float32 DistanceVehicleToHuman; // 0x2C
        Boolean RequireValidTarget; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(AIVehicleTactic) == 0x38);
}
#pragma pack(pop)