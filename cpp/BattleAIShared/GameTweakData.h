// Object: GameTweakData
// ClassId: 1646
// RuntimeId: 52902
// TypeInfo: 0x0000000144C18930
#include "../GameShared/GameAIDifficultyData.h"
#include "../BattleAIShared/GameTweakCommon.h"
#include "../BattleAIShared/GameTweakAITargeting.h"
#include "../BattleAIShared/BucketSystemSettings.h"
#include "../BattleAIShared/GameTweakPanicBehavior.h"
#include "../BattleAIShared/GameTweakEvadeBehavior.h"
#include "../BattleAIShared/GameTweakBlindedBehavior.h"
#include "../BattleAIShared/CoverSideStepData.h"
#include "../BattleAIShared/AIMoraleAffectorData.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class GameTweakData : public GameShared::GameAIDifficultyData {
        BattleAIShared::GameTweakCommon Common; // 0x18
        BattleAIShared::GameTweakAITargeting AITargeting; // 0x20
        BattleAIShared::BucketSystemSettings BucketSystemAiVsHuman; // 0x28
        BattleAIShared::BucketSystemSettings BucketSystemAiVsAi; // 0x30
        BattleAIShared::GameTweakPanicBehavior Panic; // 0x38
        BattleAIShared::GameTweakEvadeBehavior Evasion; // 0x40
        BattleAIShared::GameTweakBlindedBehavior Blinded; // 0x48
        BattleAIShared::CoverSideStepData SideStep; // 0x50
        BattleAIShared::AIMoraleAffectorData MoraleAffectors; // 0x58
    }; // 0x60
    static_assert(sizeof(GameTweakData) == 0x60);
}
#pragma pack(pop)