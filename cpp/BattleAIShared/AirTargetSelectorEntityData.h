// Object: AirTargetSelectorEntityData
// ClassId: 2042
// RuntimeId: 63246
// TypeInfo: 0x0000000144C12A80
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace BattleAIShared {
    class AirTargetSelectorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 SearchRadius; // 0x24
        Float32 TargetLostSlack; // 0x28
        Int32 MaxAttackerCountForPriorityToCount; // 0x2C
        Float32 MaxAimAngleFault; // 0x30
        Float32 MaxAngleOffOurBackwardsVector; // 0x34
        Float32 MaxDistance; // 0x38
        Int32 MaxTeam1HumanAttackers; // 0x3C
        Int32 MaxTeam2HumanAttackers; // 0x40
        Float32 MaximumDistanceToHumanToDropCurrentTarget; // 0x44
        Int32 MaxEntitiesUpdatedPerFrame; // 0x48
        Boolean PrioritizeAttackersFromBehind; // 0x4C
        Boolean EvenlyDistributeTargets; // 0x4D
        Boolean DontAttackTargetsBeingChasedByHumans; // 0x4E
        Boolean PrioritizeHumans; // 0x4F
        Boolean AutoActivate; // 0x50
        char pad_0x51[0x7];
    }; // 0x58
    static_assert(sizeof(AirTargetSelectorEntityData) == 0x58);
}
#pragma pack(pop)