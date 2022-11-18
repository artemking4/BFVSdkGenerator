// Object: StaticModelGroupEntityData
// ClassId: 3332
// RuntimeId: 19555
// TypeInfo: 0x0000000144E6CD50
#include "../Physics/GamePhysicsEntityData.h"
#include "../GameShared/StaticModelGroupMemberData.h"
#include "../Global/Uint32.h"
#include "../Global/Guid.h"

#pragma pack(push, 16)
namespace GameShared {
    class StaticModelGroupEntityData : public Physics::GamePhysicsEntityData {
        Array<GameShared::StaticModelGroupMemberData> MemberDatas; // 0xA0
        Uint32 NetworkIdCount; // 0xA8
        Guid HackToSolveRealTimeTweakingIssue; // 0xAC
        char pad_0xBC[0x4];
    }; // 0xC0
    static_assert(sizeof(StaticModelGroupEntityData) == 0xC0);
}
#pragma pack(pop)