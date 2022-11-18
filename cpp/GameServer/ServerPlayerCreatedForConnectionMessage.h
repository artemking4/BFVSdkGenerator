// Object: ServerPlayerCreatedForConnectionMessage
// RuntimeId: 8220
// TypeInfo: 0x0000000144E56A00
#pragma pack(push, 8)
namespace GameServer {
    struct ServerPlayerCreatedForConnectionMessage {
        char pad_0x0[0x40];
    }; // 0x40
    static_assert(sizeof(ServerPlayerCreatedForConnectionMessage) == 0x40);
}
#pragma pack(pop)