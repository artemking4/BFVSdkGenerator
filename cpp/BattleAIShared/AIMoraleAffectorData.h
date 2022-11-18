// Object: AIMoraleAffectorData
// ClassId: 134
// RuntimeId: 41512
// TypeInfo: 0x0000000144C12C80
#include "../Core/Asset.h"
#include "../BattleAIShared/DamageAffector.h"
#include "../BattleAIShared/NearbyFriendlyKilledAffector.h"
#include "../BattleAIShared/SquadLeaderKilledAffector.h"
#include "../BattleAIShared/ProximityToHumanAffector.h"
#include "../BattleAIShared/SuppressionAffector.h"
#include "../BattleAIShared/AimedAtByTargetAffector.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AIMoraleAffectorData : public Core::Asset {
        BattleAIShared::DamageAffector Damage; // 0x20
        BattleAIShared::NearbyFriendlyKilledAffector NearbyFriendlyKilled; // 0x28
        BattleAIShared::SquadLeaderKilledAffector SquadLeaderKilled; // 0x30
        BattleAIShared::ProximityToHumanAffector ProximityToHuman; // 0x38
        BattleAIShared::SuppressionAffector Suppression; // 0x40
        BattleAIShared::AimedAtByTargetAffector AimedAtByTarget; // 0x48
    }; // 0x50
    static_assert(sizeof(AIMoraleAffectorData) == 0x50);
}
#pragma pack(pop)