// Object: Dx11ShaderDatabase
// ClassId: 8347
// RuntimeId: 16606
// TypeInfo: 0x0000000144F20830
#include "../Render/ShaderDatabase.h"

namespace Render {
    class Dx11ShaderDatabase : public Render::ShaderDatabase {
        char pad_0x260[0x1F0];
    }; // 0x450
    static_assert(sizeof(Dx11ShaderDatabase) == 0x450);
}