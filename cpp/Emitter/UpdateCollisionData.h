// Object: UpdateCollisionData
// ClassId: 4509
// RuntimeId: 55489
// TypeInfo: 0x0000000144E2B540
#include "../Emitter/ProcessorData.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"
#include "../Emitter/EmitterCollisionMethod.h"
#include "../Emitter/EmitterCollisionPriority.h"
#include "../Emitter/EmitterSnapVelocityType.h"
#include "../Emitter/EmitterTerrainSnapType.h"

#pragma pack(push, 8)
namespace Emitter {
    class UpdateCollisionData : public Emitter::ProcessorData {
        Float32 Restitution; // 0x38
        Float32 ReflectionBias; // 0x3C
        Float32 RestSpeedThreshold; // 0x40
        Float32 Randomness; // 0x44
        Float32 CollisionRadiusFactor; // 0x48
        Emitter::EmitterCollisionMethod Method; // 0x4C
        Emitter::EmitterCollisionPriority Priority; // 0x50
        Float32 SnapOffsetBasedOnEmitter; // 0x54
        Float32 SnapRelativeOffsetFactor; // 0x58
        Float32 SnapRange; // 0x5C
        Emitter::EmitterSnapVelocityType SnapVelocity; // 0x60
        Float32 VelocityAngleThreshold; // 0x64
        Float32 VelocityHeightThreshold; // 0x68
        Emitter::EmitterTerrainSnapType SnapType; // 0x6C
        Float32 RepelFactor; // 0x70
        Float32 RepelHeight; // 0x74
        Boolean KillOnCollision; // 0x78
        Boolean SnapOnTerrain; // 0x79
        Boolean WallOfDeathSnapping; // 0x7A
        Boolean AlignQuadWithTerrain; // 0x7B
        char pad_0x7C[0x4];
    }; // 0x80
    static_assert(sizeof(UpdateCollisionData) == 0x80);
}
#pragma pack(pop)