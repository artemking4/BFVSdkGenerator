// Object: TransactionalTelemetryStreamFormat
// ClassId: 786
// RuntimeId: 26336
// TypeInfo: 0x0000000144F5E9E0
#include "../TelemetryShared/TelemetryStreamFormat.h"
#include "../TelemetryShared/TelemetryTransactionMode.h"
#include "../Global/Boolean.h"

namespace TelemetryShared {
    class TransactionalTelemetryStreamFormat : public TelemetryShared::TelemetryStreamFormat {
        TelemetryShared::TelemetryTransactionMode TransactionMode; // 0x20
        Boolean Autocommit; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(TransactionalTelemetryStreamFormat) == 0x28);
}