// Object: TelemetryPinEventEntityData
// ClassId: 3560
// RuntimeId: 28070
// TypeInfo: 0x0000000144F5AFE0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../TelemetryShared/TelemetryParameterDataProperty.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetryPinEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString EventName; // 0x28
        Array<TelemetryShared::TelemetryParameterDataProperty> Params; // 0x30
    }; // 0x38
    static_assert(sizeof(TelemetryPinEventEntityData) == 0x38);
}
#pragma pack(pop)