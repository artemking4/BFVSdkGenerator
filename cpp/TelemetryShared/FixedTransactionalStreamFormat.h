// Object: FixedTransactionalStreamFormat
// ClassId: 787
// RuntimeId: 40838
// TypeInfo: 0x0000000144F5E960
#include "../TelemetryShared/TransactionalTelemetryStreamFormat.h"
#include "../TelemetryShared/TelemetryTransactionData.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class FixedTransactionalStreamFormat : public TelemetryShared::TransactionalTelemetryStreamFormat {
        TelemetryShared::TelemetryTransactionData ReferenceRow; // 0x28
    }; // 0x30
    static_assert(sizeof(FixedTransactionalStreamFormat) == 0x30);
}
#pragma pack(pop)