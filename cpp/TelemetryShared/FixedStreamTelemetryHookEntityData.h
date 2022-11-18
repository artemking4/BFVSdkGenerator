// Object: FixedStreamTelemetryHookEntityData
// ClassId: 2744
// RuntimeId: 23669
// TypeInfo: 0x0000000144F5C4E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../TelemetryShared/FixedEventStreamData.h"
#include "../Global/Boolean.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class FixedStreamTelemetryHookEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        TelemetryShared::FixedEventStreamData Stream; // 0x28
        CString mod; // 0x30
        CString grp; // 0x38
        CString subgrp; // 0x40
        Boolean HasTelemetrySdk3EventFields; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(FixedStreamTelemetryHookEntityData) == 0x50);
}
#pragma pack(pop)