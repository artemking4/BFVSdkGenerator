// Object: MeshStreamingSettings
// ClassId: 4285
// RuntimeId: 28404
// TypeInfo: 0x0000000144F1CC00
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class MeshStreamingSettings : public Core::DataContainer {
        Float32 PrioAmortizationMillis; // 0x18
        Uint32 MaxUnloadCountPerFrame; // 0x1C
        Uint32 PoolSize; // 0x20
        Uint32 PoolHeadroomSize; // 0x24
        Float32 CpuPoolSizeFactor; // 0x28
        Uint32 DefragTransferLimit; // 0x2C
        Int32 ForceLod; // 0x30
        Uint32 MaxPendingLoadCount; // 0x34
        Float32 DistanceMin; // 0x38
        Uint32 ListViewPageIndex; // 0x3C
        Uint32 ListViewSortOrder; // 0x40
        char pad_0x44[0x4];
        CString DumpLoadedListFileName; // 0x48
        CString DumpInstanceListFileName; // 0x50
        Uint32 ReservedPositionedInstanceCount; // 0x58
        Uint32 ReservedDistancedInstanceCount; // 0x5C
        Uint32 SweepablePageSize; // 0x60
        Uint32 SweepablePageAlign; // 0x64
        Uint32 SweepableMinPages; // 0x68
        Uint32 SweepableReservedPages; // 0x6C
        Uint32 SweepablePageAllocationLimit; // 0x70
        Int32 SweepableDirectAllocationAlignmentWasteThreshold; // 0x74
        Uint32 SweepableVirtualPoolInitialVirtualSize; // 0x78
        Uint32 SweepableVirtualPoolExtendVirtualSize; // 0x7C
        Uint32 SweepableVirtualPoolMaxDelayedOperations; // 0x80
        Boolean Enable; // 0x84
        Boolean PrioAmortizationEnabled; // 0x85
        Boolean UpdateEnable; // 0x86
        Boolean UpdateJobEnable; // 0x87
        Boolean PriorityJobEnable; // 0x88
        Boolean PrioritySpuJobEnable; // 0x89
        Boolean UseSlowTexturePrio; // 0x8A
        Boolean DynamicLoadingEnable; // 0x8B
        Boolean InstantUnloadingEnable; // 0x8C
        Boolean AsyncCreatesEnable; // 0x8D
        Boolean DxImmutableUsageEnable; // 0x8E
        Boolean OverridePoolSizes; // 0x8F
        Boolean DefragEnable; // 0x90
        Boolean DefragTransfersEnable; // 0x91
        Boolean PrioritizeVisibleMeshesFirstEnable; // 0x92
        Boolean PrioritizeVisibleLodsFirstEnable; // 0x93
        Boolean PrioritizeVisibleLoadsEnable; // 0x94
        Boolean PrioritizeTexturesEnable; // 0x95
        Boolean HighestPriorityEnable; // 0x96
        Boolean DrawInstanceBoxesEnable; // 0x97
        Boolean DrawStatsEnable; // 0x98
        Boolean DrawMissingListEnable; // 0x99
        Boolean DrawPriorityListEnable; // 0x9A
        Boolean DrawLoadingListEnable; // 0x9B
        Boolean DrawMeshListEnable; // 0x9C
        Boolean DrawNonStreamedListEnable; // 0x9D
        Boolean DumpLoadedList; // 0x9E
        Boolean DumpInstanceList; // 0x9F
        Boolean DumpPoolAllocations; // 0xA0
        Boolean UseConditionalStreaming; // 0xA1
        Boolean UseSweepablePool; // 0xA2
        Boolean SweepableUseVirtualPool; // 0xA3
        Boolean SweepableVirtualPoolCanDelayAllocations; // 0xA4
        char pad_0xA5[0x3];
    }; // 0xA8
    static_assert(sizeof(MeshStreamingSettings) == 0xA8);
}
#pragma pack(pop)