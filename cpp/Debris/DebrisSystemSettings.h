// Object: DebrisSystemSettings
// ClassId: 1507
// RuntimeId: 63473
// TypeInfo: 0x0000000144DA49B0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Core/QualityLevel.h"

#pragma pack(push, 8)
namespace Debris {
    class DebrisSystemSettings : public Core::DataContainer {
        Float32 TimeScale; // 0x18
        Uint32 DrawStats; // 0x1C
        Float32 MeshCullingDistance; // 0x20
        Uint32 MeshBatchCountLimit; // 0x24
        Uint32 DebrisPoolSize; // 0x28
        Uint32 MeshDrawCountLimit; // 0x2C
        Float32 MeshStreamingPriorityMultiplier; // 0x30
        Uint32 ClientMaxDebrisInstances; // 0x34
        Core::QualityLevel DebrisQualityLevel; // 0x38
        Boolean Enable; // 0x3C
        Boolean EnableJobs; // 0x3D
        Boolean DrawEnable; // 0x3E
        Boolean MeshHavokRenderingEnable; // 0x3F
        Boolean MeshDrawTransforms; // 0x40
        Boolean MeshDrawBoundingBoxes; // 0x41
        Boolean MeshShadowEnable; // 0x42
        Boolean MeshViewCullingEnable; // 0x43
        Boolean MeshDrawCullStats; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(DebrisSystemSettings) == 0x48);
}
#pragma pack(pop)