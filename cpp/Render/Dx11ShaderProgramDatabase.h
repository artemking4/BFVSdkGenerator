// Object: Dx11ShaderProgramDatabase
// ClassId: 32
// RuntimeId: 26291
// TypeInfo: 0x0000000144F1EE70
#include "../Render/BaseShaderProgramDatabase.h"

namespace Render {
    class Dx11ShaderProgramDatabase : public Render::BaseShaderProgramDatabase {
        char pad_0x98[0x48];
    }; // 0xE0
    static_assert(sizeof(Dx11ShaderProgramDatabase) == 0xE0);
}