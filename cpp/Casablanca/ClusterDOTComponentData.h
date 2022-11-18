// Object: ClusterDOTComponentData
// ClassId: 1746
// RuntimeId: 662
// TypeInfo: 0x0000000144C7CB80
#include "../GameShared/ClusterDOTBaseComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"
#include "../DiceShooterShared/SuppressionType.h"
#include "../Entity/MaterialDecl.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ClusterDOTComponentData : public GameShared::ClusterDOTBaseComponentData {
        Int32 ImpactDamage; // 0x80
        Float32 ImpactDOTDuration; // 0x84
        Float32 ImpactDOTTickDuration; // 0x88
        Float32 DistanceMultiplier; // 0x8C
        Float32 DelayedSpawnOffset; // 0x90
        Float32 DelayedSpawnMinDuration; // 0x94
        Float32 MinDepth; // 0x98
        DiceShooterShared::SuppressionType DOTSuppressionType; // 0x9C
        Float32 SuppressionValue; // 0xA0
        Entity::MaterialDecl MaterialPair; // 0xA4
        Boolean DamageVehicles; // 0xA8
        Boolean DamageCharacters; // 0xA9
        Boolean DamageBangers; // 0xAA
        char pad_0xAB[0x5];
    }; // 0xB0
    static_assert(sizeof(ClusterDOTComponentData) == 0xB0);
}
#pragma pack(pop)