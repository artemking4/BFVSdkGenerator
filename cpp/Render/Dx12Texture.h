// Object: Dx12Texture
// ClassId: 8340
// RuntimeId: 46853
// TypeInfo: 0x0000000144F1FD50
#include "../Render/BaseTexture.h"

namespace Render {
    class Dx12Texture : public Render::BaseTexture {
        char pad_0x88[0x118];
    }; // 0x1A0
    static_assert(sizeof(Dx12Texture) == 0x1A0);
}