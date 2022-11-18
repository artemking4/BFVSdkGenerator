// Object: AutoPlayerFollowObjectiveEntityData
// ClassId: 2082
// RuntimeId: 32472
// TypeInfo: 0x0000000144BEC690
#include "../AutoPlayers/AutoPlayerObjectiveEntityData.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace AutoPlayers {
    class AutoPlayerFollowObjectiveEntityData : public AutoPlayers::AutoPlayerObjectiveEntityData {
        Core::Vec3 FollowUntilPosition; // 0x80
        DiceShooterShared::QueryEntityResult FollowTargetPlayer; // 0x90
        Float32 FollowPositionRadius; // 0xA0
        Float32 FollowTimeoutSeconds; // 0xA4
        Float32 FollowUntilPositionToleranceMeters; // 0xA8
        Boolean UseBreadCrumbsPathFollowing; // 0xAC
        Boolean ActivelyPatrolFollowPlayerPosition; // 0xAD
        char pad_0xAE[0x2];
    }; // 0xB0
    static_assert(sizeof(AutoPlayerFollowObjectiveEntityData) == 0xB0);
}
#pragma pack(pop)