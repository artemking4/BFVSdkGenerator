// Object: WaypointsShapeData
// ClassId: 1674
// RuntimeId: 10648
// TypeInfo: 0x0000000144EABD00
#include "../Entity/VectorShapeData.h"
#include "../PathfindingShared/WaypointData.h"

#pragma pack(push, 8)
namespace PathfindingShared {
    class WaypointsShapeData : public Entity::VectorShapeData {
        Array<PathfindingShared::WaypointData> Waypoints; // 0x30
    }; // 0x38
    static_assert(sizeof(WaypointsShapeData) == 0x38);
}
#pragma pack(pop)