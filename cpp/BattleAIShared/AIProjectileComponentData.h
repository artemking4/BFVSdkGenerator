// Object: AIProjectileComponentData
// ClassId: 1698
// RuntimeId: 37800
// TypeInfo: 0x0000000144C11280
#include "../Entity/GameComponentData.h"
#include "../BattleAIShared/BattleAIProjectileBinding.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Entity/GameplayBones.h"
#include "../Core/Vec3.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIProjectileComponentData : public Entity::GameComponentData {
        Core::Vec3 TargetPosition; // 0x80
        Core::LinearTransform ProjectileSpawnTransform; // 0x90
        BattleAIShared::BattleAIProjectileBinding ProjectileGamestates; // 0xD0
        Float32 ProjectileOverrideValidFor; // 0xE4
        Entity::GameplayBones ProjectileSpawnBone; // 0xE8
        Boolean MeleeProjectile; // 0xEC
        Boolean UsePreThrowTargetPositionAsFallback; // 0xED
        Boolean FetchTargetPosFromComp; // 0xEE
        char pad_0xEF[0x1];
    }; // 0xF0
    static_assert(sizeof(AIProjectileComponentData) == 0xF0);
}
#pragma pack(pop)