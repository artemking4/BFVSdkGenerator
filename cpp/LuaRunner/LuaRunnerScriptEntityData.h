// Object: LuaRunnerScriptEntityData
// ClassId: 2874
// RuntimeId: 14141
// TypeInfo: 0x0000000144EE8B20
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../LuaRunner/CustomProperty.h"
#include "../Global/Boolean.h"
#include "../LuaRunner/ExecuteOnPropertyChangeType.h"
#include "../Global/Int32.h"
#include "../Core/Realm.h"
#include "../LuaRunner/LuaRunnerCompiledLua.h"

#pragma pack(push, 8)
namespace LuaRunner {
    class LuaRunnerScriptEntityData : public Entity::EntityData {
        CString Script; // 0x20
        Array<CString> InputEvents; // 0x28
        Array<CString> OutputEvents; // 0x30
        Array<CString> InputFloatProperties; // 0x38
        Array<CString> OutputFloatProperties; // 0x40
        Array<CString> InputIntProperties; // 0x48
        Array<CString> OutputIntProperties; // 0x50
        Array<CString> InputBoolProperties; // 0x58
        Array<CString> OutputBoolProperties; // 0x60
        Array<CString> InputStringProperties; // 0x68
        Array<CString> OutputStringProperties; // 0x70
        Array<CString> InputTransformProperties; // 0x78
        Array<CString> OutputTransformProperties; // 0x80
        Array<CString> InputVec2Properties; // 0x88
        Array<CString> OutputVec2Properties; // 0x90
        Array<CString> InputVec3Properties; // 0x98
        Array<CString> OutputVec3Properties; // 0xA0
        Array<CString> InputVec4Properties; // 0xA8
        Array<CString> OutputVec4Properties; // 0xB0
        Array<LuaRunner::CustomProperty> InputCustomProperties; // 0xB8
        Array<LuaRunner::CustomProperty> OutputCustomProperties; // 0xC0
        LuaRunner::ExecuteOnPropertyChangeType ExecuteOnPropertyChange; // 0xC8
        Int32 PriorityForExecutingPerFrame; // 0xCC
        Core::Realm Realm; // 0xD0
        char pad_0xD4[0x4];
        LuaRunner::LuaRunnerCompiledLua CompiledLua; // 0xD8
        Boolean AutoStartExecutingPerFrame; // 0xE0
        Boolean AutoStartForInitialization; // 0xE1
        Boolean RunOnPropertyChange; // 0xE2
        Boolean AddToDebugDisplay; // 0xE3
        char pad_0xE4[0x4];
    }; // 0xE8
    static_assert(sizeof(LuaRunnerScriptEntityData) == 0xE8);
}
#pragma pack(pop)