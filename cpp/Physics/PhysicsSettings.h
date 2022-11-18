// Object: PhysicsSettings
// ClassId: 4420
// RuntimeId: 60317
// TypeInfo: 0x0000000144F0DB40
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Physics {
    class PhysicsSettings : public Core::DataContainer {
        Uint32 ClientClothWorldThreadCount; // 0x18
        Float32 WindManagerAwakeningRadius; // 0x1C
        Uint32 BlockStreamAllocatorMemory; // 0x20
        Uint32 StepLocalStreamAllocator; // 0x24
        Uint32 BodyBufferCapacity; // 0x28
        Uint32 MotionBufferCapacity; // 0x2C
        Uint32 ConstraintBufferCapacity; // 0x30
        Float32 SDFThickness; // 0x34
        Uint32 BrokenBodiesProcessedPerFrame; // 0x38
        Uint32 FXSolverType; // 0x3C
        Boolean Enable; // 0x40
        Boolean EnableClothInterpolationJobs; // 0x41
        Boolean EnableClothUpdateJob; // 0x42
        Boolean ClothVelocityVectorEnable; // 0x43
        Boolean ClothDrawUpdateParallelEnable; // 0x44
        Boolean RunClientSimulationSingleThreaded; // 0x45
        Boolean RunEffectSimulationSingleThreaded; // 0x46
        Boolean RunServerSimulationSingleThreaded; // 0x47
        Boolean RunClientPhysicsActionsSingleThreaded; // 0x48
        Boolean RunServerPhysicsActionsSingleThreaded; // 0x49
        Boolean EnableAIRigidBody; // 0x4A
        Boolean ForestEnable; // 0x4B
        Boolean EnableJobs; // 0x4C
        Boolean RemoveRagdollWhenWoken; // 0x4D
        Boolean RemoveFromWorldOnCollisionOverflow; // 0x4E
        Boolean SingleStepCharacter; // 0x4F
        Boolean ForceSingleStepCharacterInSP; // 0x50
        Boolean EnableFollowWheelRaycasts; // 0x51
        Boolean EnableClientWheelRaycasts; // 0x52
        Boolean UpdateVehicleTerrainLevel; // 0x53
        Boolean EnableASyncWheelRaycasts; // 0x54
        Boolean UseDelayedWakeUpClient; // 0x55
        Boolean UseDelayedWakeUpServer; // 0x56
        Boolean SuppressDebrisSpawnUntilReady; // 0x57
        Boolean EnablePlayerVSAICollisions; // 0x58
        Boolean EnableClientKeyframedCollisions; // 0x59
        Boolean EnableFXKeyframedCollisions; // 0x5A
        Boolean EnableRemoveFromWorldKeepActive; // 0x5B
        Boolean UseDynamicBlockStreamAllocator; // 0x5C
        char pad_0x5D[0x3];
    }; // 0x60
    static_assert(sizeof(PhysicsSettings) == 0x60);
}
#pragma pack(pop)