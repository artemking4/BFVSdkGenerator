// Object: PhysicsRenderSettings
// ClassId: 4419
// RuntimeId: 9910
// TypeInfo: 0x0000000144F0DBC0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class PhysicsRenderSettings : public Core::DataContainer {
        Int32 RenderTerrainMinMaxLevel; // 0x18
        Float32 ViewDistance; // 0x1C
        Int32 RenderSpecificPart; // 0x20
        Boolean RenderServer; // 0x24
        Boolean RenderClient; // 0x25
        Boolean RenderEffectWorld; // 0x26
        Boolean RenderStatic; // 0x27
        Boolean RenderDetail; // 0x28
        Boolean RenderGroup; // 0x29
        Boolean RenderUngrouped; // 0x2A
        Boolean RenderRagdoll; // 0x2B
        Boolean RenderWater; // 0x2C
        Boolean RenderTerrain; // 0x2D
        Boolean RenderCharacters; // 0x2E
        Boolean RenderAabbTrigger; // 0x2F
        Boolean RenderCharacterCollision; // 0x30
        Boolean RenderSolidGeometry; // 0x31
        Boolean UseShapeCache; // 0x32
        Boolean RenderConstraints; // 0x33
        Boolean RenderOnlyContactConstraints; // 0x34
        Boolean RenderConstraintCount; // 0x35
        Boolean RenderActiveConstraintCount; // 0x36
        Boolean RenderSimulationIslands; // 0x37
        Boolean RenderBroadphaseHandles; // 0x38
        Boolean RenderCollisionVertexCount; // 0x39
        Boolean RenderInteractingVertexCount; // 0x3A
        Boolean RenderInteractingShapeCount; // 0x3B
        Boolean RenderPenetrationDistance; // 0x3C
        Boolean RenderMidphaseCheckCount; // 0x3D
        Boolean RenderDestructionConnections; // 0x3E
        Boolean RenderActions; // 0x3F
        Boolean RenderSleepStatus; // 0x40
        Boolean RenderQualityType; // 0x41
        Boolean RenderPartBoundingBoxes; // 0x42
        Boolean RenderOnlyBoundingBoxes; // 0x43
        Boolean RenderRigidBodyTransform; // 0x44
        Boolean RenderInertia; // 0x45
        Boolean RenderCenterOfMass; // 0x46
        Boolean RenderLinearVelocity; // 0x47
        Boolean RenderCollidesWithTerrain; // 0x48
        Boolean RenderCollisionSpheres; // 0x49
        Boolean RenderEntityStats; // 0x4A
        Boolean RenderWorldStats; // 0x4B
        Boolean ShowContactsInWorldStats; // 0x4C
        Boolean ShowInactiveContactsInWorldStats; // 0x4D
        Boolean ShowPhantomsInWorldStats; // 0x4E
        Boolean ShowFixedObjectsInWorldStats; // 0x4F
        Boolean RenderMemoryUsed; // 0x50
        Boolean CollisionSpawnDebug; // 0x51
        Boolean RenderHeatMap; // 0x52
        Boolean RenderHeatMapFromToi; // 0x53
        Boolean RenderInvalidSpawnPositions; // 0x54
        Boolean RenderAddToWorldMap; // 0x55
        char pad_0x56[0x2];
    }; // 0x58
    static_assert(sizeof(PhysicsRenderSettings) == 0x58);
}
#pragma pack(pop)