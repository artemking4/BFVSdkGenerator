// Object: TransactionalTelemetryHookEntityData
// ClassId: 3585
// RuntimeId: 27169
// TypeInfo: 0x0000000144F5C3E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../TelemetryShared/TransactionalStreamData.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TransactionalTelemetryHookEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        TelemetryShared::TransactionalStreamData Stream; // 0x28
    }; // 0x30
    static_assert(sizeof(TransactionalTelemetryHookEntityData) == 0x30);
}
#pragma pack(pop)