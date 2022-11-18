// Object: TextureCompressSettings
// ClassId: 5164
// RuntimeId: 52326
// TypeInfo: 0x0000000144F20D00
#include "../Core/DataContainer.h"
#include "../Render/TextureCompressQualityMode.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Render {
    class TextureCompressSettings : public Core::DataContainer {
        Render::TextureCompressQualityMode ViewMode; // 0x18
        Uint32 TextureCompressJobPoolSize; // 0x1C
        Float32 DebugDrawAlphaOverlayScale; // 0x20
        Boolean DebugDrawEnable; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(TextureCompressSettings) == 0x28);
}
#pragma pack(pop)