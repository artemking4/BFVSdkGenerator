// Object: MoverFollowWaypointsEntityData
// ClassId: 2894
// RuntimeId: 15356
// TypeInfo: 0x0000000144EA9D70
#include "../Entity/EntityData.h"
#include "../PathfindingShared/RouteType.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class MoverFollowWaypointsEntityData : public Entity::EntityData {
        PathfindingShared::RouteType TypeOfRoute; // 0x20
        Boolean StopAtWaypoints; // 0x24
        Boolean StartAtGeometricallyClosestWaypoint; // 0x25
        char pad_0x26[0x2];
    }; // 0x28
    static_assert(sizeof(MoverFollowWaypointsEntityData) == 0x28);
}
#pragma pack(pop)