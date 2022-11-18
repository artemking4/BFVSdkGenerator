// Object: TelemetryPINReadyMessage
// RuntimeId: 9586
// TypeInfo: 0x0000000144F5C8C0
#pragma pack(push, 8)
namespace TelemetryShared {
    struct TelemetryPINReadyMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(TelemetryPINReadyMessage) == 0x30);
}
#pragma pack(pop)