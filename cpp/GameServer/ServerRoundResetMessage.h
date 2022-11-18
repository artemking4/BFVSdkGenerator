// Object: ServerRoundResetMessage
// RuntimeId: 16767
// TypeInfo: 0x0000000144E549D0
#pragma pack(push, 8)
namespace GameServer {
    struct ServerRoundResetMessage {
        char pad_0x0[0x30];
    }; // 0x30
    static_assert(sizeof(ServerRoundResetMessage) == 0x30);
}
#pragma pack(pop)