// Object: VariableEventStreamFormat
// ClassId: 785
// RuntimeId: 15706
// TypeInfo: 0x0000000144F5EA60
#include "../TelemetryShared/EventTelemetryStreamFormat.h"
#include "../Global/CString.h"
#include "../TelemetryShared/TelemetryParameterDataProperty.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class VariableEventStreamFormat : public TelemetryShared::EventTelemetryStreamFormat {
        CString mod; // 0x20
        CString grp; // 0x28
        CString subgrp; // 0x30
        Array<TelemetryShared::TelemetryParameterDataProperty> Params; // 0x38
    }; // 0x40
    static_assert(sizeof(VariableEventStreamFormat) == 0x40);
}
#pragma pack(pop)