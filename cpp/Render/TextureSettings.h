// Object: TextureSettings
// ClassId: 5165
// RuntimeId: 26057
// TypeInfo: 0x0000000144F17350
#include "../Core/DataContainer.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Render {
    class TextureSettings : public Core::DataContainer {
        Uint32 SkipMipmapCount; // 0x18
        Boolean LoadingEnabled; // 0x1C
        Boolean RenderTexturesEnabled; // 0x1D
        Boolean StreamableMipmapsEnable; // 0x1E
        char pad_0x1F[0x1];
    }; // 0x20
    static_assert(sizeof(TextureSettings) == 0x20);
}
#pragma pack(pop)