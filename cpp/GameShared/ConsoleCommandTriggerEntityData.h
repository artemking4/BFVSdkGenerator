// Object: ConsoleCommandTriggerEntityData
// ClassId: 2546
// RuntimeId: 36306
// TypeInfo: 0x0000000144E8FEE0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace GameShared {
    class ConsoleCommandTriggerEntityData : public Entity::EntityData {
        CString CommandName; // 0x20
        CString GroupName; // 0x28
        Core::Realm Realm; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(ConsoleCommandTriggerEntityData) == 0x38);
}
#pragma pack(pop)