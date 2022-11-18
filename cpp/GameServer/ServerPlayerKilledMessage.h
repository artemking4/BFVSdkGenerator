// Object: ServerPlayerKilledMessage
// RuntimeId: 45022
// TypeInfo: 0x0000000144E56410
#pragma pack(push, 16)
namespace GameServer {
    struct ServerPlayerKilledMessage {
        char pad_0x0[0x80];
    }; // 0x80
    static_assert(sizeof(ServerPlayerKilledMessage) == 0x80);
}
#pragma pack(pop)