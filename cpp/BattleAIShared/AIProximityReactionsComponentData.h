// Object: AIProximityReactionsComponentData
// ClassId: 1699
// RuntimeId: 62840
// TypeInfo: 0x0000000144C13300
#include "../Entity/GameComponentData.h"
#include "../BattleAIShared/AIProximityReactionsBinding.h"
#include "../BattleAIShared/AIInvestigateBinding.h"
#include "../BattleAIShared/AISurpriseBinding.h"
#include "../BattleAIShared/AIReactionBinding.h"
#include "../BattleAIShared/AIBoneAlignBinding.h"
#include "../BattleAIShared/CharacterStateBinding.h"
#include "../BattleAIShared/BoneAlignSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../BattleAIShared/LookAtHuman.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AIProximityReactionsComponentData : public Entity::GameComponentData {
        BattleAIShared::AIProximityReactionsBinding Binding; // 0x80
        BattleAIShared::AIInvestigateBinding InvestigateBinding; // 0x314
        BattleAIShared::AISurpriseBinding SurpriseBinding; // 0x3B4
        BattleAIShared::AIReactionBinding ReactionBinding; // 0x404
        BattleAIShared::AIBoneAlignBinding BoneAlignBinding; // 0x4A4
        BattleAIShared::CharacterStateBinding CharacterStateBindings; // 0x4B8
        BattleAIShared::BoneAlignSettings BoneAlignSettings; // 0x4C0
        Float32 CheckNavmeshLength; // 0x4CC
        Float32 MinExplosionImpulseForce; // 0x4D0
        Float32 MaxExplosionLookDistance; // 0x4D4
        Float32 FireReactionDistance; // 0x4D8
        Float32 DrasticAimYawAmount; // 0x4DC
        Float32 HumanPlayerProximityOcclusionRadius; // 0x4E0
        char pad_0x4E4[0x4];
        Array<BattleAIShared::LookAtHuman> LookAtHumanTiming; // 0x4E8
        Boolean CheckNavmeshInReactionDirection; // 0x4F0
        Boolean ShouldUseHumanPlayerProximityOcclusion; // 0x4F1
        Boolean EnableImpulseReactions; // 0x4F2
        Boolean EnableFriendlyVehicleKills; // 0x4F3
        Boolean HasAvailableBayonet; // 0x4F4
        char pad_0x4F5[0xB];
    }; // 0x500
    static_assert(sizeof(AIProximityReactionsComponentData) == 0x500);
}
#pragma pack(pop)