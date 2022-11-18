// Object: VarStreamTelemetryHookEntityData
// ClassId: 3856
// RuntimeId: 19276
// TypeInfo: 0x0000000144F5C460
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../TelemetryShared/VarEventStreamData.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class VarStreamTelemetryHookEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString mod; // 0x28
        CString grp; // 0x30
        CString subgrp; // 0x38
        TelemetryShared::VarEventStreamData Stream; // 0x40
    }; // 0x48
    static_assert(sizeof(VarStreamTelemetryHookEntityData) == 0x48);
}
#pragma pack(pop)