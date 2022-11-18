// Object: TerrainStreamingSettings
// ClassId: 5160
// RuntimeId: 64464
// TypeInfo: 0x0000000144EAF1F0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace TerrainBase {
    class TerrainStreamingSettings : public Core::DataContainer {
        Uint32 DataLoadJobCount; // 0x18
        Uint32 ActiveFreeStreamingDataLoadJobCount; // 0x1C
        Uint32 AdditionalBlurriness; // 0x20
        Float32 InvisibleDetailReductionFactor; // 0x24
        Float32 OccludedDetailReductionFactor; // 0x28
        Uint32 HeightfieldAtlasSampleCountXFactor; // 0x2C
        Uint32 HeightfieldAtlasSampleCountYFactor; // 0x30
        Uint32 MaskAtlasSampleCountXFactor; // 0x34
        Uint32 MaskAtlasSampleCountYFactor; // 0x38
        Uint32 MaskAdditionalBlurriness; // 0x3C
        Uint32 ColorAtlasSampleCountXFactor; // 0x40
        Uint32 ColorAtlasSampleCountYFactor; // 0x44
        Uint32 ColorAdditionalBlurriness; // 0x48
        Boolean LoadOccluderDataEnable; // 0x4C
        Boolean KeepPoolFullEnable; // 0x4D
        char pad_0x4E[0x2];
    }; // 0x50
    static_assert(sizeof(TerrainStreamingSettings) == 0x50);
}
#pragma pack(pop)