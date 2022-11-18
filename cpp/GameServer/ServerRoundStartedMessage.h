// Object: ServerRoundStartedMessage
// RuntimeId: 15540
// TypeInfo: 0x0000000144E54A20
#pragma pack(push, 8)
namespace GameServer {
    struct ServerRoundStartedMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerRoundStartedMessage) == 0x30);
}
#pragma pack(pop)