// Object: BaseTexture
// ClassId: 8338
// RuntimeId: 36206
// TypeInfo: 0x0000000144F20480
#include "../Render/ITexture.h"

namespace Render {
    class BaseTexture : public Render::ITexture {
        char pad_0x8[0x80];
    }; // 0x88
    static_assert(sizeof(BaseTexture) == 0x88);
}