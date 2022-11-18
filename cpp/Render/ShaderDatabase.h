// Object: ShaderDatabase
// ClassId: 8346
// RuntimeId: 18247
// TypeInfo: 0x0000000144F208B0
#include "../Render/IShaderDatabase.h"

namespace Render {
    class ShaderDatabase : public Render::IShaderDatabase {
        char pad_0x8[0x258];
    }; // 0x260
    static_assert(sizeof(ShaderDatabase) == 0x260);
}