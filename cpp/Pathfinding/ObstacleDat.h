// Object: ObstacleDat
// ClassId: 4380
// RuntimeId: 52902
// TypeInfo: 0x0000000144EA9BF0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Pathfinding/CustomObstacleData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class ObstacleDat : public Core::DataContainer {
        Uint32 LayerMask; // 0x18
        Float32 PenaltyMult; // 0x1C
        Uint32 ObstacleBlockageFlags; // 0x20
        char pad_0x24[0x4];
        Pathfinding::CustomObstacleData UserData; // 0x28
        CString ObstacleName; // 0x30
    }; // 0x38
    static_assert(sizeof(ObstacleDat) == 0x38);
}
#pragma pack(pop)