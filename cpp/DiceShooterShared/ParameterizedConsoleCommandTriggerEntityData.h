// Object: ParameterizedConsoleCommandTriggerEntityData
// ClassId: 2931
// RuntimeId: 62536
// TypeInfo: 0x0000000144DEDE20
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ParameterizedConsoleCommandTriggerEntityData : public Entity::EntityData {
        CString CommandName; // 0x20
        Core::Realm Realm; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(ParameterizedConsoleCommandTriggerEntityData) == 0x30);
}
#pragma pack(pop)