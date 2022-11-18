// Object: ServerRoundInterruptedMessage
// RuntimeId: 952
// TypeInfo: 0x0000000144E54930
#pragma pack(push, 8)
namespace GameServer {
    struct ServerRoundInterruptedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerRoundInterruptedMessage) == 0x30);
}
#pragma pack(pop)