// Object: Dx11Texture
// ClassId: 8339
// RuntimeId: 35226
// TypeInfo: 0x0000000144F1ED70
#include "../Render/BaseTexture.h"

namespace Render {
    class Dx11Texture : public Render::BaseTexture {
        char pad_0x88[0x58];
    }; // 0xE0
    static_assert(sizeof(Dx11Texture) == 0xE0);
}