// Object: AITargetingComponentData
// ClassId: 1704
// RuntimeId: 23144
// TypeInfo: 0x0000000144C06C60
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../GameShared/TeamId.h"
#include "../Global/Float32.h"

#pragma pack(push, 16)
namespace BattleAIShared {
    class AITargetingComponentData : public Entity::GameComponentData {
        Core::Realm Realm; // 0x80
        GameShared::TeamId StandAloneTeam; // 0x84
        Float32 HumanTargetPreference; // 0x88
        Float32 ThreatDistanceMultiplier; // 0x8C
        Boolean RegisterAsTarget; // 0x90
        Boolean AutoActivate; // 0x91
        Boolean RegisterAsStandAlone; // 0x92
        Boolean MustBeVisible; // 0x93
        Boolean IsTarget; // 0x94
        char pad_0x95[0xB];
    }; // 0xA0
    static_assert(sizeof(AITargetingComponentData) == 0xA0);
}
#pragma pack(pop)