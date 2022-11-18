// Object: LuaRunnerSharedVarsEntityData
// ClassId: 2875
// RuntimeId: 8308
// TypeInfo: 0x0000000144EE8AA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace LuaRunner {
    class LuaRunnerSharedVarsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Boolean AddToDebugDisplay; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(LuaRunnerSharedVarsEntityData) == 0x28);
}
#pragma pack(pop)