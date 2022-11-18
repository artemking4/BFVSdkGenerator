// Object: AIBucketSystemComponentData
// ClassId: 1694
// RuntimeId: 51179
// TypeInfo: 0x0000000144BFF350
#include "../Entity/GameComponentData.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIBucketSystemComponentData : public Entity::GameComponentData {
        Float32 BulletDamageMultiplier; // 0x80
        Float32 ExplosionDamageMultiplier; // 0x84
        Float32 DOTDamageMultiplier; // 0x88
        Boolean UseEvasiveBucketSettings; // 0x8C
        Boolean UseHumanPlayer; // 0x8D
        Boolean OverrideUpdateInVehicle; // 0x8E
        char pad_0x8F[0x1];
    }; // 0x90
    static_assert(sizeof(AIBucketSystemComponentData) == 0x90);
}
#pragma pack(pop)