// Object: TelemetryHookEntityData
// ClassId: 3559
// RuntimeId: 64218
// TypeInfo: 0x0000000144F5C560
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../TelemetryShared/TelemetryParameterDataProperty.h"
#include "../TelemetryShared/TelemetryTransportData.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TelemetryHookEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString mod; // 0x28
        CString grp; // 0x30
        CString subgrp; // 0x38
        Array<TelemetryShared::TelemetryParameterDataProperty> Params; // 0x40
        Array<TelemetryShared::TelemetryTransportData> Transports; // 0x48
    }; // 0x50
    static_assert(sizeof(TelemetryHookEntityData) == 0x50);
}
#pragma pack(pop)