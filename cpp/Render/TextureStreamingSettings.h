// Object: TextureStreamingSettings
// ClassId: 5167
// RuntimeId: 493
// TypeInfo: 0x0000000144F173D0
#include "../Core/DataContainer.h"
#include "../Global/Boolean.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Render {
    class TextureStreamingSettings : public Core::DataContainer {
        Int32 ForceMipmap; // 0x18
        Uint32 MinMipmapCount; // 0x1C
        Uint32 MaxMipmapCount; // 0x20
        Float32 MipmapBias; // 0x24
        Uint32 MaxTextureSizeKb; // 0x28
        Float32 FadeMipmapTime; // 0x2C
        Uint32 MinTextureSize; // 0x30
        Uint32 PoolSize; // 0x34
        Uint32 PoolHeadroomSize; // 0x38
        Uint32 OnDemandPoolSize; // 0x3C
        Uint32 OnDemandMaxAllocCount; // 0x40
        Uint32 LoadingScreenPoolSize; // 0x44
        Uint32 DefragFrameTransferLimit; // 0x48
        Uint32 MaxPendingLoadCount; // 0x4C
        Uint32 MaxPendingUnloadCount; // 0x50
        Uint32 MaxFrameTextureCreateSize; // 0x54
        Uint32 MaxFrameTextureCreateCount; // 0x58
        Float32 PriorityThreshold; // 0x5C
        Uint32 ListViewPageIndex; // 0x60
        char pad_0x64[0x4];
        CString DumpLoadedListFileName; // 0x68
        Uint32 SweepablePageSize; // 0x70
        Uint32 SweepablePageAlign; // 0x74
        Uint32 SweepableMinPages; // 0x78
        Uint32 SweepableReservedPages; // 0x7C
        Uint32 SweepablePageAllocationLimit; // 0x80
        Int32 SweepableDirectAllocationAlignmentWasteThreshold; // 0x84
        Uint32 SweepableVirtualPoolInitialVirtualSize; // 0x88
        Uint32 SweepableVirtualPoolExtendVirtualSize; // 0x8C
        Uint32 SweepableVirtualPoolMaxDelayedOperations; // 0x90
        Boolean Enable; // 0x94
        Boolean UpdateEnable; // 0x95
        Boolean DynamicLoadingEnable; // 0x96
        Boolean ChunkLoadEnable; // 0x97
        Boolean InstantUnloadingEnable; // 0x98
        Boolean OnlyWantedInPool; // 0x99
        Boolean ForceWantedEnable; // 0x9A
        Boolean AsyncCreatesEnable; // 0x9B
        Boolean LoadMipmapsEnable; // 0x9C
        Boolean UploadMipmapsEnable; // 0x9D
        Boolean UnloadInPlaceEnable; // 0x9E
        Boolean TextureUpdateEnable; // 0x9F
        Boolean ImmutableUsageEnable; // 0xA0
        Boolean MipmapsEnable; // 0xA1
        Boolean FadeMipmapsEnable; // 0xA2
        Boolean ForceNonStreamableTexturesInStreamablePool; // 0xA3
        Boolean OverridePoolSize; // 0xA4
        Boolean PoolEnable; // 0xA5
        Boolean DefragEnable; // 0xA6
        Boolean DefragTransfersEnable; // 0xA7
        Boolean UseVirtualPool; // 0xA8
        Boolean DrawStatsEnable; // 0xA9
        Boolean DrawTextureGroupStatsEnable; // 0xAA
        Boolean DrawTextureFormatStatsEnable; // 0xAB
        Boolean DrawLoadingListEnable; // 0xAC
        Boolean DrawPriorityListEnable; // 0xAD
        Boolean DumpLoadedList; // 0xAE
        Boolean DumpPoolAllocations; // 0xAF
        Boolean UseConditionalStreaming; // 0xB0
        Boolean UseSweepablePool; // 0xB1
        Boolean SweepableUseVirtualPool; // 0xB2
        Boolean SweepableVirtualPoolCanSplitLargeBlocks; // 0xB3
        Boolean SweepableVirtualPoolCanDelayAllocations; // 0xB4
        char pad_0xB5[0x3];
    }; // 0xB8
    static_assert(sizeof(TextureStreamingSettings) == 0xB8);
}
#pragma pack(pop)