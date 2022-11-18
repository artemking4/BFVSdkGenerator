// Object: DynamicDebugVariableEntityData
// ClassId: 2674
// RuntimeId: 40123
// TypeInfo: 0x0000000144D65FF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../CasablancaShared/DynamicDebugVariableType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class DynamicDebugVariableEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString GroupName; // 0x28
        CString VariableName; // 0x30
        CasablancaShared::DynamicDebugVariableType VariableType; // 0x38
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(DynamicDebugVariableEntityData) == 0x40);
}
#pragma pack(pop)