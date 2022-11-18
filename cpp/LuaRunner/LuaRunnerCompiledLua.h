// Object: LuaRunnerCompiledLua
// ClassId: 552
// RuntimeId: 9891
// TypeInfo: 0x0000000144EE8BA0
#include "../Core/Asset.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace LuaRunner {
    class LuaRunnerCompiledLua : public Core::Asset {
        ResourceRef CompiledLuaResource; // 0x20
    }; // 0x28
    static_assert(sizeof(LuaRunnerCompiledLua) == 0x28);
}
#pragma pack(pop)