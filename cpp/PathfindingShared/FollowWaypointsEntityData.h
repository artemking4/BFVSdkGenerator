// Object: FollowWaypointsEntityData
// ClassId: 2762
// RuntimeId: 3422
// TypeInfo: 0x0000000144EABE80
#include "../Entity/EntityData.h"
#include "../PathfindingShared/RouteType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class FollowWaypointsEntityData : public Entity::EntityData {
        PathfindingShared::RouteType TypeOfRoute; // 0x20
        Boolean UsePathFinding; // 0x24
        Boolean StartAtGeometricallyClosestWaypoint; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(FollowWaypointsEntityData) == 0x28);
}
#pragma pack(pop)