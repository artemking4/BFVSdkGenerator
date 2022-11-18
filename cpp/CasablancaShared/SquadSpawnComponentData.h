// Object: SquadSpawnComponentData
// ClassId: 1855
// RuntimeId: 9487
// TypeInfo: 0x0000000144D5D2E0
#include "../Entity/GameComponentData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class SquadSpawnComponentData : public Entity::GameComponentData {
        Float32 CombatCooldownTime; // 0x80
        Float32 SuppressionThreshold; // 0x84
        Float32 SuppressionLevel; // 0x88
        Float32 NearbyEnemyDistance; // 0x8C
        Float32 EnemyVisibleRecheckTime; // 0x90
        Int32 MaxCloseEnemyLimit; // 0x94
        Float32 ResetToDeployTooLateTime; // 0x98
        Float32 NewSpawnDelay; // 0x9C
        Boolean EnableEnemyProximityChecks; // 0xA0
        Boolean Enabled; // 0xA1
        char pad_0xA2[0xE];
    }; // 0xB0
    static_assert(sizeof(SquadSpawnComponentData) == 0xB0);
}
#pragma pack(pop)