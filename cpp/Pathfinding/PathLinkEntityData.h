// Object: PathLinkEntityData
// ClassId: 3428
// RuntimeId: 19260
// TypeInfo: 0x0000000144EA9A70
#include "../Entity/SpatialEntityData.h"
#include "../Core/Vec3.h"
#include "../Pathfinding/PathLinkDirection.h"
#include "../PathfindingShared/LinkDat.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Pathfinding {
    class PathLinkEntityData : public Entity::SpatialEntityData {
        Array<Core::Vec3> Points; // 0x60
        Pathfinding::PathLinkDirection Direction; // 0x68
        char pad_0x6C[0x4];
        PathfindingShared::LinkDat LinkDat; // 0x70
        Boolean ActiveAtStart; // 0x78
        Boolean DeferredCreation; // 0x79
        char pad_0x7A[0x6];
    }; // 0x80
    static_assert(sizeof(PathLinkEntityData) == 0x80);
}
#pragma pack(pop)