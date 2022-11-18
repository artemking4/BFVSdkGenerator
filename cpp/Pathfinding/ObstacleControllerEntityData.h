// Object: ObstacleControllerEntityData
// ClassId: 2918
// RuntimeId: 49176
// TypeInfo: 0x0000000144EA9AF0
#include "../Entity/EntityData.h"
#include "../Global/Boolean.h"
#include "../Pathfinding/ObstacleDat.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class ObstacleControllerEntityData : public Entity::EntityData {
        Pathfinding::ObstacleDat ObstacleData; // 0x20
        Boolean ActiveAtStart; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(ObstacleControllerEntityData) == 0x30);
}
#pragma pack(pop)