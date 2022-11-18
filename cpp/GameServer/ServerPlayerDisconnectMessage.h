// Object: ServerPlayerDisconnectMessage
// RuntimeId: 14858
// TypeInfo: 0x0000000144E56190
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPlayerDisconnectMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerPlayerDisconnectMessage) == 0x40);
}
#pragma pack(pop)