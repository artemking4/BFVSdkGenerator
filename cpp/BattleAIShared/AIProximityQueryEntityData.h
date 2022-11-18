// Object: AIProximityQueryEntityData
// ClassId: 2014
// RuntimeId: 43669
// TypeInfo: 0x0000000144C11800
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/VehicleInclusionMode.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/QueryFilterMode.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIProximityQueryEntityData : public Entity::EntityData {
        BattleAIShared::VehicleInclusionMode VehicleInclusionType; // 0x20
        Float32 QueryMinRadius; // 0x24
        Float32 QueryMaxRadius; // 0x28
        Float32 RelativeVelocityThreshold; // 0x2C
        BattleAIShared::QueryFilterMode QueryFilterType; // 0x30
        Boolean IncludeOwner; // 0x34
        Boolean IncludePlayersOnFoot; // 0x35
        Boolean IncludePlayersInOtherVehicles; // 0x36
        Boolean IncludeAIPlayersExecutingActions; // 0x37
    }; // 0x38
    static_assert(sizeof(AIProximityQueryEntityData) == 0x38);
}
#pragma pack(pop)