// Object: DestructionVolumeSettings
// ClassId: 1516
// RuntimeId: 97
// TypeInfo: 0x0000000144EB9C60
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace WorldRender {
    class DestructionVolumeSettings : public Core::DataContainer {
        Float32 PixelsPerMeter; // 0x18
        Float32 DistanceFieldMultiplier; // 0x1C
        Int32 VolumeTextureAtlasResolution; // 0x20
        Int32 VolumeTextureMinResolution; // 0x24
        Int32 VolumeTextureMaxResolution; // 0x28
        Boolean JobsEnable; // 0x2C
        Boolean ForceUpdateEnable; // 0x2D
        Boolean DrawDebugVolumes; // 0x2E
        Boolean DrawDebugImpacts; // 0x2F
        Boolean DrawDebugTexturePool; // 0x30
        char pad_0x31[0x7];
    }; // 0x38
    static_assert(sizeof(DestructionVolumeSettings) == 0x38);
}
#pragma pack(pop)