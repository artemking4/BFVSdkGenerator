// Object: VegetationSystemSettings
// ClassId: 5561
// RuntimeId: 14975
// TypeInfo: 0x0000000144EB4570
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Vegetation {
    class VegetationSystemSettings : public Core::DataContainer {
        Float32 MaxActiveDistance; // 0x18
        Float32 MaxEffectDistance; // 0x1C
        Uint32 MaxActiveBones; // 0x20
        Float32 MaxWiggleDistance; // 0x24
        Int32 ForceShadowLod; // 0x28
        Float32 SimulationEaseOutTime; // 0x2C
        Float32 VelocityVectorCullingDistance; // 0x30
        Float32 TimeScale; // 0x34
        Uint32 JobCount; // 0x38
        Boolean DestructionEnable; // 0x3C
        Boolean UseShadowLodOffset; // 0x3D
        Boolean ShadowMeshEnable; // 0x3E
        Boolean DissolveEnable; // 0x3F
        Boolean Enable; // 0x40
        Boolean EnableJobs; // 0x41
        Boolean DrawNodes; // 0x42
        Boolean DrawNodeIDs; // 0x43
        Boolean DrawNodeStiffness; // 0x44
        Boolean DrawEnable; // 0x45
        Boolean BatchDrawEnable; // 0x46
        Boolean DrawNonSimulatedAsRigid; // 0x47
        Boolean DrawActiveInstanceBoxesEnable; // 0x48
        Boolean DrawEffectDebugInfoEnable; // 0x49
        Boolean DrawDamageDebugInfoEnable; // 0x4A
        Boolean DrawStatsEnable; // 0x4B
        Boolean ProceduralAnimationEnable; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(VegetationSystemSettings) == 0x50);
}
#pragma pack(pop)