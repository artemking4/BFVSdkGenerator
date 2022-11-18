// Object: MeshCullSettings
// ClassId: 4280
// RuntimeId: 24455
// TypeInfo: 0x0000000144EB9590
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WorldRender {
    class MeshCullSettings : public Core::DataContainer {
        Int32 FreezeFrustumViewIndex; // 0x18
        Uint32 DrawDebugViewIndex; // 0x1C
        Int32 DrawVisibleEntitiesFrustumIndex; // 0x20
        Int32 DrawHiddenEntitiesFrustumIndex; // 0x24
        Int32 HiPrepareSkipCountDistanceCull; // 0x28
        Int32 HiPrepareSkipCountOcclusionCull; // 0x2C
        Int32 HiPrepareSkipCountExtrusionViewCull; // 0x30
        Int32 HiPrepareSkipCountFrustumCull; // 0x34
        Int32 HiPrepareDrawFrustumIndex; // 0x38
        Int32 HiPrepareDrawGridIndex; // 0x3C
        Float32 FlatMissingExtrusionLength; // 0x40
        Boolean EnableJobs; // 0x44
        Boolean Enabled; // 0x45
        Boolean DrawVisibleEntitiesProjection; // 0x46
        Boolean DrawVisibleEntitiesBounds; // 0x47
        Boolean DrawHiddenEntitiesProjection; // 0x48
        Boolean DrawHiddenEntitiesBounds; // 0x49
        Boolean DisableZChecking; // 0x4A
        Boolean DisableZShadowChecking; // 0x4B
        Boolean EnableEarlyOutFullyInside; // 0x4C
        Boolean HiEnable; // 0x4D
        Boolean HiEnableDistanceCull; // 0x4E
        Boolean HiEnableOcclusionCull; // 0x4F
        Boolean HiEnableExtrusionView; // 0x50
        Boolean HiEnableInstanceFlags; // 0x51
        Boolean HiEnablePrepareFrustumTesting; // 0x52
        Boolean HiPrepareDrawHierarchy; // 0x53
        Boolean HiPrepareDrawHierarchyLocal; // 0x54
        Boolean FlatUseTracingShadowCulling; // 0x55
        Boolean FlatEnableFlags; // 0x56
        Boolean FlatEnableSecondarySizeCulling; // 0x57
        Boolean FlatPrecalculatedMeshExtrusionEnable; // 0x58
        Boolean FlatPrecalculatedMeshOcclusionEnable; // 0x59
        Boolean FlatDrawPrecomputedExtrusionStats; // 0x5A
        char pad_0x5B[0x5];
    }; // 0x60
    static_assert(sizeof(MeshCullSettings) == 0x60);
}
#pragma pack(pop)