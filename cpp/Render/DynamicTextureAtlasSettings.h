// Object: DynamicTextureAtlasSettings
// ClassId: 1529
// RuntimeId: 9940
// TypeInfo: 0x0000000144F172D0
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Render {
    class DynamicTextureAtlasSettings : public Core::DataContainer {
        Uint32 EmitterBaseWidth; // 0x18
        Uint32 EmitterBaseHeight; // 0x1C
        Uint32 EmitterBaseMipmapCount; // 0x20
        Uint32 EmitterBaseSkipmipsCount; // 0x24
        Uint32 EmitterNormalWidth; // 0x28
        Uint32 EmitterNormalHeight; // 0x2C
        Uint32 EmitterNormalMipmapCount; // 0x30
        Uint32 EmitterNormalSkipmipsCount; // 0x34
        Float32 EmitterBasePixelBorder; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(DynamicTextureAtlasSettings) == 0x40);
}
#pragma pack(pop)