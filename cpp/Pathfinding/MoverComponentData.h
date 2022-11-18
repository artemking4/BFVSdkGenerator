// Object: MoverComponentData
// ClassId: 1811
// RuntimeId: 32542
// TypeInfo: 0x0000000144EA9DF0
#include "../Entity/GameComponentData.h"
#include "../Pathfinding/EntityMoverType.h"
#include "../Pathfinding/MoverTune.h"
#include "../Global/Float32.h"
#include "../Pathfinding/RadiusData.h"
#include "../Global/Boolean.h"
#include "../Ant/AntRef.h"

#pragma pack(push, 16)
namespace Pathfinding {
    class MoverComponentData : public Entity::GameComponentData {
        Pathfinding::EntityMoverType type; // 0x80
        char pad_0x84[0x4];
        Pathfinding::MoverTune moverTune; // 0x88
        Float32 goalPlanFailureTreshold; // 0x90
        Float32 goalHeightFailureTreshold; // 0x94
        Pathfinding::RadiusData radiusData; // 0x98
        Float32 MoveSpeedModifier; // 0xA0
        Ant::AntRef DesiredMovementAngleGameState; // 0xA4
        Ant::AntRef DesiredRelativeMovementAngleGameState; // 0xB8
        Ant::AntRef DesiredMovementSpeedGameState; // 0xCC
        Ant::AntRef DesiredFacingAngleGameState; // 0xE0
        Ant::AntRef DesiredRelativeFacingAngleGameState; // 0xF4
        Ant::AntRef DistanceToGoalGameState; // 0x108
        Boolean EnablePuppetMode; // 0x11C
        Boolean LockToNavGraph; // 0x11D
        char pad_0x11E[0x2];
    }; // 0x120
    static_assert(sizeof(MoverComponentData) == 0x120);
}
#pragma pack(pop)