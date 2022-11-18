// Object: TelemetryGenericHookEntityData
// ClassId: 3558
// RuntimeId: 5182
// TypeInfo: 0x0000000144F5C5E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../TelemetryShared/EventStreamData.h"
#include "../TelemetryShared/TelemetryLogEvent.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetryGenericHookEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        TelemetryShared::EventStreamData Stream; // 0x28
        TelemetryShared::TelemetryLogEvent LogEvent; // 0x30
    }; // 0x38
    static_assert(sizeof(TelemetryGenericHookEntityData) == 0x38);
}
#pragma pack(pop)