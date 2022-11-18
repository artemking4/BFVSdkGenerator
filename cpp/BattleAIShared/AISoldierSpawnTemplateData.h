// Object: AISoldierSpawnTemplateData
// ClassId: 210
// RuntimeId: 45486
// TypeInfo: 0x0000000144C10800
#include "../GameShared/CharacterSpawnTemplateData.h"
#include "../BattleAIShared/SoldierTactics.h"
#include "../BattleAIShared/BattleAIProjectile.h"
#include "../BattleAIShared/CoverZones.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../BattleAIShared/AlertTransitionsAsset.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/PhysicsLocoSettings.h"
#include "../GameShared/CharacterCustomizationAsset.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AISoldierSpawnTemplateData : public GameShared::CharacterSpawnTemplateData {
        BattleAIShared::SoldierTactics Tactics; // 0x48
        Array<BattleAIShared::BattleAIProjectile> Projectiles; // 0x50
        BattleAIShared::BattleAIProjectile MeleeProjectile; // 0x58
        BattleAIShared::CoverZones CoverZonesOverride; // 0x60
        Int32 NpcUniqueId; // 0x68
        char pad_0x6C[0x4];
        BattleAIShared::AlertTransitionsAsset AlertTransitions; // 0x70
        Float32 AlertPropagationSpeed; // 0x78
        Float32 TargetLostTime; // 0x7C
        BattleAIShared::PhysicsLocoSettings PhysicsLocoSettings; // 0x80
        GameShared::CharacterCustomizationAsset CharacterCustomizationAsset; // 0x88
        Boolean StaggersAllowed; // 0x90
        Boolean FriendlyPlayerCollisionEnabled; // 0x91
        Boolean AllowAIAlertEnemyTeam; // 0x92
        Boolean AllowedToBeMeleeChargeTarget; // 0x93
        Boolean CanBeRevived; // 0x94
        char pad_0x95[0x3];
    }; // 0x98
    static_assert(sizeof(AISoldierSpawnTemplateData) == 0x98);
}
#pragma pack(pop)