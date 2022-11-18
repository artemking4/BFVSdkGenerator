// Object: MoverTune
// ClassId: 581
// RuntimeId: 4597
// TypeInfo: 0x0000000144EAA470
#include "../Core/Asset.h"
#include "../Global/Float32.h"
#include "../Pathfinding/RadiusData.h"
#include "../Global/Int32.h"
#include "../Pathfinding/CautionTune.h"
#include "../Global/Uint32.h"
#include "../Pathfinding/BlockageMode.h"
#include "../Pathfinding/AutoObstacleTune.h"
#include "../Pathfinding/PathCreationOptions.h"
#include "../Pathfinding/JumperTune.h"
#include "../Global/Boolean.h"
#include "../Pathfinding/ProberTune.h"
#include "../Pathfinding/GoalTune.h"
#include "../Pathfinding/IdleTune.h"
#include "../Pathfinding/TurnInPlaceTune.h"
#include "../Pathfinding/RepulsionAccelerationTune.h"
#include "../Pathfinding/SurfaceOrientTune.h"
#include "../Pathfinding/FollowerTune.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class MoverTune : public Core::Asset {
        Float32 speed; // 0x20
        Float32 maxSpeedFraction; // 0x24
        Pathfinding::RadiusData radiusData; // 0x28
        Float32 bulk; // 0x30
        Float32 cruiseAcc; // 0x34
        Float32 startStopAcc; // 0x38
        Int32 repulsorType; // 0x3C
        Float32 flockAcc; // 0x40
        Float32 maxFlockAccDist; // 0x44
        Float32 pathAcc; // 0x48
        char pad_0x4C[0x4];
        Pathfinding::CautionTune cautionTune; // 0x50
        Float32 backpedalFraction; // 0x58
        Uint32 planLayer; // 0x5C
        Float32 pathSharingPenalty; // 0x60
        Pathfinding::BlockageMode obstacleMode; // 0x64
        Uint32 obstacleBlockageFlags; // 0x68
        char pad_0x6C[0x4];
        Pathfinding::AutoObstacleTune autoObTune; // 0x70
        Uint32 repulsorBlockageFlags; // 0x78
        Uint32 repulsorIdentityFlags; // 0x7C
        Uint32 linkUsageFlags; // 0x80
        char pad_0x84[0x4];
        Pathfinding::PathCreationOptions pathOptions; // 0x88
        Pathfinding::JumperTune jumperTune; // 0x90
        Pathfinding::ProberTune proberTune; // 0x98
        Pathfinding::GoalTune goalTune; // 0xA0
        Pathfinding::IdleTune idleTune; // 0xA8
        Pathfinding::TurnInPlaceTune turnInPlace; // 0xB0
        Pathfinding::RepulsionAccelerationTune repulsionAccelerationTune; // 0xB8
        Pathfinding::SurfaceOrientTune surfaceOrientTune; // 0xC0
        Float32 sidestepFraction; // 0xC8
        Uint32 customGeoMatchFlags; // 0xCC
        Pathfinding::FollowerTune followerTune; // 0xD0
        Boolean exitPuppetInObstacles; // 0xD8
        Boolean allowDetour; // 0xD9
        Boolean clientMotion; // 0xDA
        char pad_0xDB[0x5];
    }; // 0xE0
    static_assert(sizeof(MoverTune) == 0xE0);
}
#pragma pack(pop)