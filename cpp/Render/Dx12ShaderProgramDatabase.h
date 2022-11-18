// Object: Dx12ShaderProgramDatabase
// ClassId: 33
// RuntimeId: 41763
// TypeInfo: 0x0000000144F1FED0
#include "../Render/BaseShaderProgramDatabase.h"

namespace Render {
    class Dx12ShaderProgramDatabase : public Render::BaseShaderProgramDatabase {
        char pad_0x98[0x98];
    }; // 0x130
    static_assert(sizeof(Dx12ShaderProgramDatabase) == 0x130);
}