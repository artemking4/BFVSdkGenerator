// Object: LuaRunnerSharedVarsEntity
// ClassId: 7254
// RuntimeId: 41872
// TypeInfo: 0x0000000144EE9030
#include "../Entity/Entity.h"

namespace LuaRunner {
    class LuaRunnerSharedVarsEntity : public Entity::Entity {
        char pad_0x20[0xA0];
    }; // 0xC0
    static_assert(sizeof(LuaRunnerSharedVarsEntity) == 0xC0);
}