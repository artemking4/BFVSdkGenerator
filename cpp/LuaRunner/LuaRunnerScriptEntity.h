// Object: LuaRunnerScriptEntity
// ClassId: 7253
// RuntimeId: 42742
// TypeInfo: 0x0000000144EE8F20
#include "../Entity/Entity.h"

namespace LuaRunner {
    class LuaRunnerScriptEntity : public Entity::Entity {
        char pad_0x20[0x4DF8];
    }; // 0x4E18
    static_assert(sizeof(LuaRunnerScriptEntity) == 0x4E18);
}