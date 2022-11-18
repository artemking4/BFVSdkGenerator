// Object: AIVehicleLevelSetupData
// ClassId: 2020
// RuntimeId: 33646
// TypeInfo: 0x0000000144C067E0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIVehicleLevelSetupData : public Entity::EntityData {
        Boolean ForceIntroPath; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(AIVehicleLevelSetupData) == 0x28);
}
#pragma pack(pop)