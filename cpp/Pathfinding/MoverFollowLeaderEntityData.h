// Object: MoverFollowLeaderEntityData
// ClassId: 2893
// RuntimeId: 62701
// TypeInfo: 0x0000000144EA9CF0
#include "../Entity/EntityData.h"
#include "../Pathfinding/FollowMoverSpec.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class MoverFollowLeaderEntityData : public Entity::EntityData {
        Pathfinding::FollowMoverSpec FollowingParameters; // 0x20
        Uint32 FlockId; // 0x2C
    }; // 0x30
    static_assert(sizeof(MoverFollowLeaderEntityData) == 0x30);
}
#pragma pack(pop)