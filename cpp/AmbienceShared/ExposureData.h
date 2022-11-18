// Object: ExposureData
// ClassId: 1610
// RuntimeId: 24271
// TypeInfo: 0x0000000144BE07F0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"
#include "../Global/Uint8.h"
#include "../AmbienceShared/AreaBounds.h"
#include "../Global/Guid.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class ExposureData : public Core::DataContainer {
        Float32 SampleInterval; // 0x18
        Float32 RadialRaycastHeightOffset; // 0x1C
        Float32 RadialRaycastMinDistance; // 0x20
        Float32 RadialRaycastMaxDistance; // 0x24
        AmbienceShared::AreaBounds ScanArea; // 0x28
        Guid ChunkId; // 0x38
        Uint32 ChunkSize; // 0x48
        Uint32 WidthSampleCount; // 0x4C
        Uint32 HeightSampleCount; // 0x50
        Uint8 RadialRaycastCount; // 0x54
        char pad_0x55[0x3];
    }; // 0x58
    static_assert(sizeof(ExposureData) == 0x58);
}
#pragma pack(pop)