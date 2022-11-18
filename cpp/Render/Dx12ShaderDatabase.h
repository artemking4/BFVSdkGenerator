// Object: Dx12ShaderDatabase
// ClassId: 8348
// RuntimeId: 55312
// TypeInfo: 0x0000000144F207B0
#include "../Render/ShaderDatabase.h"

namespace Render {
    class Dx12ShaderDatabase : public Render::ShaderDatabase {
        char pad_0x260[0x250];
    }; // 0x4B0
    static_assert(sizeof(Dx12ShaderDatabase) == 0x4B0);
}