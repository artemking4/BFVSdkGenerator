// Object: TransactionalStreamData
// ClassId: 772
// RuntimeId: 9895
// TypeInfo: 0x0000000144F5E6E0
#include "../TelemetryShared/StreamData.h"
#include "../TelemetryShared/FixedTransactionalStreamFormat.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace TelemetryShared {
    class TransactionalStreamData : public TelemetryShared::StreamData {
        TelemetryShared::FixedTransactionalStreamFormat Format; // 0x30
        Boolean AutoCommit; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(TransactionalStreamData) == 0x40);
}
#pragma pack(pop)