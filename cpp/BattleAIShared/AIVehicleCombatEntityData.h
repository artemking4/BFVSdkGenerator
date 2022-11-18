// Object: AIVehicleCombatEntityData
// ClassId: 2019
// RuntimeId: 27307
// TypeInfo: 0x0000000144C05D60
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../BattleAIShared/VehicleCombatSettings.h"
#include "../Global/Int32.h"
#include "../Core/Vec3.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIVehicleCombatEntityData : public Entity::EntityData {
        BattleAIShared::VehicleCombatSettings Settings; // 0x20
        char pad_0x28[0x8];
        Core::Vec3 LastKnownLocation; // 0x30
        Int32 OccupyingAiId; // 0x40
        Float32 TimeSinceVisible; // 0x44
        Float32 BestTargetAngle; // 0x48
        Float32 PatrolSpeed; // 0x4C
        Float32 CombatSpeed; // 0x50
        Boolean UsePathFinding; // 0x54
        Boolean ExclusiveCombatZones; // 0x55
        Boolean HoldFire; // 0x56
        Boolean AllowAIOccupants; // 0x57
        Boolean IsAlerted; // 0x58
        Boolean IsVehicleTarget; // 0x59
        char pad_0x5A[0x6];
    }; // 0x60
    static_assert(sizeof(AIVehicleCombatEntityData) == 0x60);
}
#pragma pack(pop)