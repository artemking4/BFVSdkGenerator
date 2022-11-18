// Object: TelemetryGenericHookEntity
// ClassId: 8086
// RuntimeId: 54568
// TypeInfo: 0x0000000144F537F0
#include "../Entity/Entity.h"

namespace Telemetry {
    class TelemetryGenericHookEntity : public Entity::Entity {
        char pad_0x20[0x20];
    }; // 0x40
    static_assert(sizeof(TelemetryGenericHookEntity) == 0x40);
}