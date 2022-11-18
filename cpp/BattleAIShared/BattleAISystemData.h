// Object: BattleAISystemData
// ClassId: 508
// RuntimeId: 31949
// TypeInfo: 0x0000000144C06A60
#include "../GameShared/GameAISystem.h"
#include "../BattleAIShared/CoverConstantData.h"
#include "../BattleAIShared/FiringPatternCollectionData.h"
#include "../BattleAIShared/TargetingData.h"
#include "../BattleAIShared/ShootingData.h"
#include "../BattleAIShared/SquadEngageData.h"
#include "../BattleAIShared/AreaBookingSettings.h"
#include "../BattleAIShared/SquadSettings.h"
#include "../BattleAIShared/ProjectileData.h"
#include "../BattleAIShared/AlertnessData.h"
#include "../BattleAIShared/AwarenessData.h"
#include "../BattleAIShared/SoundData.h"
#include "../BattleAIShared/ThreatData.h"
#include "../BattleAIShared/PreferredRange.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class BattleAISystemData : public GameShared::GameAISystem {
        BattleAIShared::CoverConstantData CoverConstants; // 0x20
        BattleAIShared::FiringPatternCollectionData FiringPatternCollection; // 0x28
        BattleAIShared::TargetingData Targeting; // 0x30
        BattleAIShared::ShootingData Shooting; // 0x38
        BattleAIShared::SquadEngageData SquadEngageData; // 0x3C
        BattleAIShared::AreaBookingSettings AreaBookingSettings; // 0x5C
        BattleAIShared::SquadSettings SquadSettings; // 0x74
        char pad_0x84[0x4];
        BattleAIShared::AlertnessData AlertnessData; // 0x88
        BattleAIShared::AwarenessData AwarenessData; // 0x98
        BattleAIShared::SoundData SoundData; // 0xE0
        BattleAIShared::ThreatData ThreatData; // 0xF0
        BattleAIShared::PreferredRange PreferredRange; // 0xF8
        BattleAIShared::ProjectileData ProjectileData; // 0x100
        char pad_0x101[0x7];
    }; // 0x108
    static_assert(sizeof(BattleAISystemData) == 0x108);
}
#pragma pack(pop)